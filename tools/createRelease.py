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
parser = argparse.ArgumentParser(description='Generate release from Github openETCs/modeling.')
parser.add_argument('-u', '--username',default=None, help='Github username')
parser.add_argument('-p', '--password',default=None, help='Github password')

ns = parser.parse_args()


if ns.username != None and ns.password == None:
    ns.password = getpass.getpass()


# Github repo and milestone
g = Github(ns.username,ns.password)
repo = g.get_repo("openETCS/modeling")
milestone = repo.get_milestone(int(ns.milestone)+ 4)      
issues = repo.get_issues(milestone,"closed")

            
