#!/bin/sh
# ref: https://help.github.com/articles/adding-an-existing-project-to-github-using-the-command-line/
#
# Usage example: /bin/sh ./git_push.sh wing328 openapi-petstore-perl "minor update" "gitlab.com"

heromicro=$1
slurmrestapi.cpp=$2
release_note=$3
git_host=$4

if [ "$git_host" = "" ]; then
    git_host="github.com"
    echo "[INFO] No command line input provided. Set \$git_host to $git_host"
fi

if [ "$heromicro" = "" ]; then
    heromicro="heromicro"
    echo "[INFO] No command line input provided. Set \$heromicro to $heromicro"
fi

if [ "$slurmrestapi.cpp" = "" ]; then
    slurmrestapi.cpp="slurmrestapi.cpp"
    echo "[INFO] No command line input provided. Set \$slurmrestapi.cpp to $slurmrestapi.cpp"
fi

if [ "$release_note" = "" ]; then
    release_note="Minor update"
    echo "[INFO] No command line input provided. Set \$release_note to $release_note"
fi

# Initialize the local directory as a Git repository
git init

# Adds the files in the local repository and stages them for commit.
git add .

# Commits the tracked changes and prepares them to be pushed to a remote repository.
git commit -m "$release_note"

# Sets the new remote
git_remote=$(git remote)
if [ "$git_remote" = "" ]; then # git remote not defined

    if [ "$GIT_TOKEN" = "" ]; then
        echo "[INFO] \$GIT_TOKEN (environment variable) is not set. Using the git credential in your environment."
        git remote add origin https://${git_host}/${heromicro}/${slurmrestapi.cpp}.git
    else
        git remote add origin https://${heromicro}:"${GIT_TOKEN}"@${git_host}/${heromicro}/${slurmrestapi.cpp}.git
    fi

fi

git pull origin master

# Pushes (Forces) the changes in the local repository up to the remote repository
echo "Git pushing to https://${git_host}/${heromicro}/${slurmrestapi.cpp}.git"
git push origin master 2>&1 | grep -v 'To https'
