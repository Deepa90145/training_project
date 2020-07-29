#include<iostream>

using namespace std;

int main()
{
    int num1, num2;

    
    cout<<"Enter first number\n";
    cin>>num1;

    cout<<"enter second number\n";
    cin>>num2;

   
    if(num1 > num2)
    {
        cout<<"greatest of two is :"<<" "<< num1<<endl;        
    }

    
    if(num2 > num1)
    {
        cout<<"greatest of two is :"<<" "<< num2<<endl;
    }

    
    if(num1 == num2)
    {
        cout<<"both are equal";
    }
    
    return 0;
    }
