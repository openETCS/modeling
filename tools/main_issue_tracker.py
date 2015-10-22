import sys
import os
import time
import numpy as np
import datetime
from github import Github


#"UserName", "Password"
g = Github(sys.argv[1], sys.argv[2]);


print "Loading";


query="https://github.com/openETCS/modeling";
sort="comments";
order="desc";


issue_CREATED = []
issue_CLOSED = []
issue_URL= []
issue_TITLE=[]
issue_LABELS=[]
issue_LABELS_URL=[];


for templateNAME in g.search_issues(query, sort, order):
    issue_CREATED.append(templateNAME.created_at)
    issue_CLOSED.append(templateNAME.closed_at)
    issue_URL.append(templateNAME.html_url)
    issue_TITLE.append(templateNAME.title)
    issue_LABELS.append(templateNAME.labels)
    issue_LABELS_URL.append(templateNAME.labels_url)


ISSUE_AXES = { 'ISSUE_CREATED': 0, 'ISSUE_CLOSED':1, 'ISSUE_URL':2, 'ISSUE_TITLE':3, 'ISSUE_LABELS':4 }
issue_=np.vstack([np.asarray(issue_CREATED),np.asarray(issue_CLOSED),np.asarray(issue_URL),np.asarray(issue_TITLE),np.asarray(issue_LABELS)])


closed_ISSUE = [];
not_closed_ISSUE= [];


for i in range(len(issue_[ISSUE_AXES['ISSUE_CLOSED'],:])):
    if issue_[ISSUE_AXES['ISSUE_CLOSED'],i] is not None:
        closed_ISSUE.append(issue_[:,i])
    else:
        not_closed_ISSUE.append(issue_[:,i])

#all accomplished issues
closed_ISSUE_MA=np.asarray(closed_ISSUE)

#unsolved issues (ongoing)
not_closed_ISSUE_MA=np.asarray(not_closed_ISSUE)


#checking for duration
current_TIME = datetime.datetime.now();
duration=[];
not_closed_ISSUE_URL=[];
not_closed_ISSUE_TITLE=[];
not_closed_ISSUE_LABELS=[];


for i in range(len(not_closed_ISSUE_MA[:,ISSUE_AXES['ISSUE_CREATED']])):
    if not_closed_ISSUE_MA[i,ISSUE_AXES['ISSUE_CREATED']] is not None:
        duration.append( current_TIME - not_closed_ISSUE_MA[i,ISSUE_AXES['ISSUE_CREATED']])
        not_closed_ISSUE_URL.append(not_closed_ISSUE[i][ISSUE_AXES['ISSUE_URL']])
        not_closed_ISSUE_TITLE.append(not_closed_ISSUE[i][ISSUE_AXES['ISSUE_TITLE']])
        not_closed_ISSUE_LABELS.append(not_closed_ISSUE[i][ISSUE_AXES['ISSUE_LABELS']])
    else:
        print "is completed"

#days displayed as bar plots, where each bar represents one week; print duration[1].days
WEEKS_NR = { 'ONE': 0, 'TWO':1, 'THREE': 2, 'FOUR':3 , 'FIVE':4, 'SIX': 5, 'SEVEN':6, 'GREATER_THEN':7}
count_WEEKS=np.zeros(8);
j=0;
count_URL=[ [] for j in range(WEEKS_NR['GREATER_THEN'] + 1) ];
count_TITLE=[ [] for j in range(WEEKS_NR['GREATER_THEN'] + 1) ];
count_LABELS=[ [] for j in range(WEEKS_NR['GREATER_THEN'] + 1) ];

for i in range(len(not_closed_ISSUE_MA[:,ISSUE_AXES['ISSUE_CREATED']])):
    if duration[i].days < 8:
        count_WEEKS[WEEKS_NR['ONE']]=count_WEEKS[WEEKS_NR['ONE']] +1;
        count_URL[WEEKS_NR['ONE']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['ONE']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['ONE']].append(not_closed_ISSUE_LABELS[i])
    elif duration[i].days > 7 and duration[i].days < 15:
        count_WEEKS[WEEKS_NR['TWO']]=count_WEEKS[WEEKS_NR['TWO']] +1;
        count_URL[WEEKS_NR['TWO']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['TWO']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['TWO']].append(not_closed_ISSUE_LABELS[i])
    elif duration[i].days > 14 and duration[i].days < 22:
        count_WEEKS[WEEKS_NR['THREE']]=count_WEEKS[WEEKS_NR['THREE']] +1;
        count_URL[WEEKS_NR['THREE']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['THREE']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['THREE']].append(not_closed_ISSUE_LABELS[i])
    elif duration[i].days > 21 and duration[i].days < 29:
        count_WEEKS[WEEKS_NR['FOUR']]=count_WEEKS[WEEKS_NR['FOUR']] +1;
        count_URL[WEEKS_NR['FOUR']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['FOUR']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['FOUR']].append(not_closed_ISSUE_LABELS[i])
    elif duration[i].days > 28 and duration[i].days < 36:
        count_WEEKS[WEEKS_NR['FIVE']]=count_WEEKS[WEEKS_NR['FIVE']] +1;
        count_URL[WEEKS_NR['FIVE']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['FIVE']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['FIVE']].append(not_closed_ISSUE_LABELS[i])
    elif duration[i].days > 35 and duration[i].days < 43:
        count_WEEKS[WEEKS_NR['SIX']]=count_WEEKS[WEEKS_NR['SIX']] +1;
        count_URL[WEEKS_NR['SIX']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['SIX']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['SIX']].append(not_closed_ISSUE_LABELS[i])
    elif duration[i].days > 42 and duration[i].days < 50:
        count_WEEKS[WEEKS_NR['SEVEN']]=count_WEEKS[WEEKS_NR['SEVEN']] +1;
        count_URL[WEEKS_NR['SEVEN']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['SEVEN']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['SEVEN']].append(not_closed_ISSUE_LABELS[i])
    elif duration[i].days > 49:
        count_WEEKS[WEEKS_NR['GREATER_THEN']]=count_WEEKS[WEEKS_NR['GREATER_THEN']] +1;
        count_URL[WEEKS_NR['GREATER_THEN']].append(not_closed_ISSUE_URL[i])
        count_TITLE[WEEKS_NR['GREATER_THEN']].append(not_closed_ISSUE_TITLE[i])
        count_LABELS[WEEKS_NR['GREATER_THEN']].append(not_closed_ISSUE_LABELS[i])


#writing the required files
f = open('Week_1.txt', 'w');
  
for i in range(len(count_TITLE[WEEKS_NR['ONE']][:])):
    f.write("["); f.write(count_TITLE[WEEKS_NR['ONE']][i]); f.write("](")
    f.write(count_URL[WEEKS_NR['ONE']][i]);
    f.write(")"); f.write(" and the Labels are: ");
    for j in range(len(count_LABELS[WEEKS_NR['ONE']][i][:])):
        f.write(count_LABELS[WEEKS_NR['ONE']][i][j].name);
        f.write(" ");
    f.write("\n");f.write("\n");
f.close();
  
      
f = open('Week_2.txt', 'w');


for i in range(len(count_TITLE[WEEKS_NR['TWO']][:])):
    f.write("["); f.write(count_TITLE[WEEKS_NR['TWO']][i]); f.write("](")
    f.write(count_URL[WEEKS_NR['TWO']][i]);
    f.write(")"); f.write(" and the Labels are: ");
    for j in range(len(count_LABELS[WEEKS_NR['TWO']][i][:])):
        f.write(count_LABELS[WEEKS_NR['TWO']][i][j].name);
        f.write(" ");
    f.write("\n");f.write("\n");
f.close();
 
f = open('Week_3.txt', 'w');
 
for i in range(len(count_TITLE[WEEKS_NR['THREE']][:])):
    f.write("["); f.write(count_TITLE[WEEKS_NR['THREE']][i]); f.write("](")
    f.write(count_URL[WEEKS_NR['THREE']][i]);
    f.write(")"); f.write(" and the Labels are: ");
    for j in range(len(count_LABELS[WEEKS_NR['THREE']][i][:])):
        f.write(count_LABELS[WEEKS_NR['THREE']][i][j].name);
        f.write(" ");
    f.write("\n");f.write("\n");
f.close();


print "create_md_Report";
os.system("perl create_md_Report.pl");

time.sleep(6);

print "done"