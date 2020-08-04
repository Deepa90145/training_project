#include<iostream>

using namespace std;

int main() {
    int num1,num2,add,sub,multi;
    double division;
cout<<"You have to enter two positive integers\n";

cout<<"Enter first positive integer\n";
cin>>num1;


cout<<"Enter second  positive integer\n";
cin>>num2;

//Addition
cout<<"addition of number entered is:";
add=num1+num2;
cout<<add<<endl;

//sustraction
cout<<"substraction of number entered is:";
sub=num1-num2;
cout<<sub<<endl;

//multiplication
cout<<"Multiplication of number entered is:";
multi=num1*num2;
cout<<multi<<endl;

//Division
cout<<"Division of number entered is:";
if(num2==0) {
    cout<<"\nPlease enter valid denominator,denomitaor for division must be greater than zero\n";
}
else{
    division=num1/num2;
cout<<division<<endl;
}
return 0;

}
