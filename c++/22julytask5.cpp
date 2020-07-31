#include<iostream>
#include<string.h>

using namespace std;

    //defining structure
	struct students{

	char name[20];
	int age ;
	float percentage;

	};
    
    
    int i;
    
    //declaring function
	void print (struct students stud[]);

	int main() {

	struct students stu[3];
	struct students stu2;


   for(i=0; i<2; i++){ //taking values from user
    cout << "Student " << i + 1 << endl;
    cout << "Enter name" << endl;
    cin >> stu[i].name;
    cout << "Enter age" << endl;
    cin >> stu[i].age;
    cout << "Enter percentage" << endl;
    cin >> stu[i].percentage;
    
   
   }

   //passing structure array to function
   cout<<"\n\nDiplay total number of students and data\n";
    print(stu);
	


//copy structure
  stu2=stu[1];
  cout<<"\n\nData after being copied from structure1 and structure2\n";
  cout << "name : " << stu2.name << endl;
  cout << "age : " << stu2.age<< endl;
  cout << "percentage : " << stu2.percentage << endl;
                

	return 0;
	}


//using function to print student infromation
	void print(struct students stud[]){
        for(i=0; i<2; i++){    //printing values
            cout << "Student " << i + 1 << endl;
            cout << "name : " << stud[i].name<< endl;
             cout << "Name : " << stud[i].age << endl;
             cout << "Percenatage : " << stud[i].percentage <<"\n";
                                        }
    }	
