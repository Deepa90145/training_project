#! /bin/bash
#defining function
function Fun1()
{
    echo "This is bash programming"
}

#calling function
Fun1


#defining second function
function recArea() {
    area=$(($1 * $2));
    echo "Area is :$area"
}


#calling second function
recArea 10 20

