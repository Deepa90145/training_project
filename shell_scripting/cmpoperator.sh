#! /bin/bash

#user entered string compariosn
echo "Enter first string"
read string1
echo "Enter second string"
read string2

if [ $string1 == $string2 ]; then
echo "Strings are equal"
else
echo "strings are not equal"
fi


#partial string comaprison
echo " "
echo "Enter your engineering stream"
read stream;

if [[ $stream == *science* ]];
then
echo "partially match"
else
echo "No Match"
fi


