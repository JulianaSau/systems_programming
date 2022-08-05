#!/bin/sh
# JULIANA SAU NYANGE SCT211-0010/2019
# A script that converts all the .bmp files in a given directory to .jpeg files
# the user should be prompted to enter the file path. The output after the conversion
# should give us the number of images converted

echo "Please enter the file path"
read filepath

find $filepath -name '*.bmp' -type f bash -c 'convert "$f" "${f%.bmp}.jpg"' {} \;
echo " $(find $filepath -iname "*.bmp" | wc -l) files have been converted"