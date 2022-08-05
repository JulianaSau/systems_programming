#!/bin/sh
# JULIANA SAU NYANGE SCT211-0010/2019
# A script that counts the number of empty folders in a directory(with size=0)
# and outputs the list of those folders and the time created

stat -c '%n' '%w' $(find -type d -empty)

