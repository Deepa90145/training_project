#include<iostream>

using namespace std;

int main() {

	unsigned int i=1;
        unsigned int j=1;
        unsigned int k=1;

	//for loop to print 1 to 10
	cout<<"1 to 10 using for loop\n";
	for(i;i <=10;i++){
        cout<<i<<endl;
	}

	//while loop to print 1 to 10
	cout<<"1 to 10 using while loop"<<endl;
	while(j<=10){
		cout<<j<<endl;
		j++;
	}

	//do-while loop to print 1 t0 10
	cout<<"1 to 10 using do-while  loop"<<endl;
	do{
		cout<<k<<endl;
		k++;
	}
	while(k<=10);

	return 0;
	}
