import subprocess
import json
import sys
from collections import OrderedDict

lis =[]
cnt=0
tes=0
def install(name):
	ret = 0
	hel = subprocess.call(['pip3', 'install', '--user', name])
	if(ret or hel):
		lis.append(name)
		

with open(sys.argv[1],'r') as f:
    data = json.load(f)
    depend = data.get("Dependencies",{})

for x in depend:
	stri = x+"=="+depend[x]
	install(stri)

if(len(lis)):
	for he in lis:
		print(he)
else:
	print("Success" + str(len(lis)))
