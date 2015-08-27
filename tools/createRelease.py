#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Filename: createRelease.py
###########################################################
# Mi 26 Aug 2015 17:43:59 CEST 
#
# Uses PyGitgub library http://jacquev6.github.io/PyGithub/v1/
#@author: Stefan Karg, LEA Railergy, s.karg@railergy.com
#
#@description:
# Automatically create a release.
# The script automatically collects all issues related to bugfixes
# since the last release and automatically generates a of the release.
###########################################################
import sys 
import argparse
import getpass

from github import Github
from datetime import timedelta
from datetime import date

# Parsing arguments
parser = argparse.ArgumentParser(description='Generate release note from Github openETCs/toolchain.')
parser.add_argument('-u', '--username',default=None, help='Github username')
parser.add_argument('-p', '--password',default=None, help='Github password')
parser.add_argument('-m', '--milestone',default=None, help='Toolchain milestone to generate from')

ns = parser.parse_args()


if ns.username != None and ns.password == None:
    ns.password = getpass.getpass()
if ns.milestone == None:
    ns.milestone = raw_input("Milestone number: ") 


# Github repo and milestone
g = Github(ns.username,ns.password)
repo = g.get_repo("openETCS/toolchain")
milestone = repo.get_milestone(int(ns.milestone)+ 4)      
issues = repo.get_issues(milestone,"closed")

# Generate the release note

print "** " + milestone.title
print "*** resolved issues"
for c in issues:
    print ("- #%d %s" % (c.number,c.title) )

print
print "*** Important commit " 
for c in issues:
    events = c.get_events()
    for e in events:
        if e.event == "referenced":
            print "- " + e.commit_id
            try:
                if  repo.get_commit(e.commit_id).commit.message != None:
                    print " " +  repo.get_commit(e.commit_id).commit.message
            except:
                print "Unexpected error:", sys.exc_info()[0]
                pass
            
