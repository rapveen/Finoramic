For automatically downloading required packages use ppm.py file
All the required packages are mentioned in package.json file in required format(as key value pair)

Steps:
1. open terminal in Ubuntu
2. navigate to the folder containing ppm.py file
3. execute the file using command "python ppm.py package.json" (without braces)

the ppm.py file takes package.json as input file 
it installs packages using system call with pip

