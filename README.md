# c-prog
git init == to initialise .git in that specific folder  
git add -A === Add all the files to staging area  
git add <file name>== file is ready to be commited  
git commit -m"your message here"== -m flag is used to write message  
git checkout <file name>== to go to the previous version of the file  
git checkout -f == all the changes are reversed to the commited version  
git log ---> all the  commits message  
git log -p -number --> shows the git message with diff  
git diff --> compares the workiing directory with staging area  
if working directory and staging area is same then it won't show anything  
git diff  --staged --> compares the staging area with last commit  
git rm --cached <file name>--> remove the file from tracking  
git rm <filename> ---> deletes the file  
git commit --> commit the changes  
#YOU SHOULDN'T USE THIS COMMAND  
git commit -a -m"your commmiting message"-->directly commits your changes that you have made without 
staging the file  
.gitignore--> is file mein jin files folders ke naam honge un sabko ignore kiya jayega  
pura  folder ignore karne ke liye <foldername>/ aur iske aage ek slash  
git branch --> lists all the branches and the present working branch  
git branch <branch name> -->creates a branch  
git checkout <branchname> --> switches to that branch  
git checkout -b <branchname> --> creates that branch and switches it to that branch  
git merge <branch name> --> merges that branch with master  

