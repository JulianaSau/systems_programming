#!/bin/bash
# JULIANA SAU NYANGE SCT211-0010/2019
# Implement a mail merge in linux bash and it should work with all browsers

recipients=$(tr -s '[[:punct:]][:space:]]' '\n' < $2)
echo "$1" | mutt -s "Invitation to a webinar" "$recipients" 
