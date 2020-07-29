#include<iostream>

using namespace std;

int main() {
 
	cout<<"Enter A for loop ,B for while loop,C for do-while loop\n";

	char ch;
	unsigned int j=1,k=1;
	cin>>ch;
	//using switch-case for different cases

	switch(ch){

	case 'A':

	cout<<"Printing 1 to 10 using for loop\n";

	for(int i=1;i<=10;i++){
	cout<<i<<endl;
	}
	break;



	case 'B':
	cout<<"Printing 1 to 10 using while  loop\n";
	while(j<=10)
	{
	cout<<j<<endl;
	j++;
	}
	break;



	case 'C':
	cout<<"Printing 1 to 10 using DO-WHILE  loop\n";

	do
	{
	cout<<k<<endl;
	k++;
	}
	while(k<=10);
	break;
	}
	return 0;

	}
