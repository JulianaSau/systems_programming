#!/bin/bash
# JULIANA SAU NYANGE SCT211-0010/2019
# Write a bash script that scans network or hosts 
# attached to an IP address. The script should show if the host is up

nmap $1 -sn -PE