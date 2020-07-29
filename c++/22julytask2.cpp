#include<iostream>

using namespace std;

int main() 
{ 
    unsigned int num1,num2,num3,max;
    cout<<"Enter first number\n";
    cin>>num1; 

    cout<<"Enter second number\n";
    cin>>num2;

    cout<<"Enter third  number\n";
    cin>>num3;
  
    max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3); 
  
    cout<<"maximum of three number is"<<" "<< max<<endl; 
 
  
    return 0; 
} 
