#! /bin/bash
#printing value by index number
echo "AWK COMMANDS"
echo "Print value at index number 2"
awk '{print $2}' awkandsed.txt


#printing file
echo "Display file content"
awk '{print}' awkandsed.txt

#printing first and last value of a line"
echo "first and last value of a line"
awk '{print $1,$NF}' awkandsed.txt

#printing file content if the string matches particular column
echo  "print line if there is a string avialable abc50"
awk '{ if($3 == "abc50") print $0;}' awkandsed.txt


#replacing text in a file
echo "Replacing ':' with '-'"
awk '$1=$1' FS=":" OFS="-" awkandsed.txt

#using sed commands
echo "SED COMMANDS"
echo "replacing text in a file"
sed  's/-/:/g' awkandsed.txt

#print the replaced line twice on the terminal
echo "Print replaced line "
 sed -n 's/-/:/p' awkandsed.txt

#deleting line if the file matches the pattren
echo "delting line matching pattren"
sed '/ABCDEFG/d' awkandsed.txt

