#! /bin/bash
#Taking filename from the user
echo "Enter file name"
read newfile

#checking if it already exist then display 'file exist'"
if [ -f "$newfile" ]
then
echo "File exist"

#if not then create file and copy existing file content into file created

else
cat student.txt >> $newfile
cat $newfile
fi
