#!/bin/sh
#JULIANA SAU NYANGE SCT211-0010/2019
# A shell script that reads the text in a text file called Gashororo.txt and outputs 
# number of characters(exclusive of whitespaces) in that text file

file=$(find -name "Gashororo.txt")
printf "$file" | tr -d '[:space:] ' | wc -m
