# DataStructuresProject
Hello Everyone! This is a project of SCM headed by Nishkarsh Raj to make a collaborative effort on Git to make a running model to demonstrate Linked List using C++.
Data Structures Project used to understand Distributed Development, collaboration and Branching features of Git.
Uses Merging and Rebasing for code conflicts.

Collaborators:
1) Nirmaljeet Singh
2) Prajawal Banati
3) Parth Rai
4) Sailesh Pilla
5) Prakhar Agarwal

# How to contribute

1. Fork the repository to your own GitHub account.

2. Clone the repository to your local machine
```
$ git clone "https://www.github.com/{Username}/DataStructuresProject.git"
```
where username is your GitHub account username.

3. Create a branch where you can do your local work.
Never work on **master** branch as we do not allow master commits except by admins.
```
$ git branch {branchname}
$ git checkout branchname
```

4. Do your work and stage your changes.
```
$ git add <filename>
```

5. Commit you changes with a commit message containing your name, file(s) worked upon, changes added.
```
$ git commit -m "Name| files| Changes"
```

6. Push changes to your forked repository
```
$ git push -u origin branchname
```

# Synchronize forked repository with Upstream repository

1. Create upstream as our repository
```
$ git remote add upstream "https://www.github.com/NishkarshRaj/DataStructuresProject.git"
```

2. Fetch upstream changes in local machine
```
$ git fetch upstream
```

3. Switch to master branch
```
$ git checkout master
```

4. Merge changes in local machine
```
$ git merge upstream/master
```

5. Push changes to your forked GitHub repository
```
$ git push -f origin master
```
