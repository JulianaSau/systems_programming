#!/bin/sh
#JULIANA SAU NYANGE SCT211-0010/2019
# A script that reads four numbers from the keyboatd and prints
# their sum

i=0
sum=0

while [[ $i < 4 ]] ; do

    echo "Enter a number: "
    read num
    ((sum+=$num))
    ((i++))

done

echo "The sum of the numbers you entered is $sum"