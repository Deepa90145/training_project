#! /bin/bash

#readinf file student.txt that already exist
filename='student.txt'
n=1
while read line;do
echo "Line No. $n:$line"

n=$((n+1))

done< $filename

