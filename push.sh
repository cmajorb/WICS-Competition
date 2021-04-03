#!/bin/bash

git add . --all
git commit -m $1
git push

#put the comment in quotes in the command line as the argument
