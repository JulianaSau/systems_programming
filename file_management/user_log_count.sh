#!/bin/bash
# JULIANA SAU NYANGE SCT211-0010/2019
# A shell script that given a persons UID, tells you how many
# times that person is logged into the system

# Taking input from user
echo "Enter UID"
read input

if [[ $input ]] 
  then
    echo "Number of times logged in is "
    # checks logs for user who's UID matches the input and counts 
    # the no of times they appear on the list
    who | grep $input -c | wc -l
  
fi