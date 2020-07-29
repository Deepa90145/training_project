#include<iostream>

using namespace std;

int main()
	{
	int num1,num2,swap;
	cout<<"Enter first positive number\n";
	cin>>num1;

	cout<<"Enter second positive number\n";
	cin>>num2;

	//swapping using third integer

	swap=num1;
	num1=num2;
	num2=swap;

	cout<<"numbers after being swapped is num1:"<<" "<<num1<<" "<<"num2:"<<" "<<num2<<endl;

	//swapping without using thied variable
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;

	cout<<"numbers swapped without using third variable num1:"<<" "<<num1<<" "<<"num2:"<<" "<<num2<<endl;

	return 0;

	}
