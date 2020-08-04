#! /bin/bash

#reading file feom the command line input
echo "Before appending the file"
 filename=$1
 while read line;do
 echo $line
 done < $filename


 echo "After appending the file"
 echo "Norsaang" >>student.txt
 while read line;do
 echo $line
 done < student.txt

 
