#include<iostream>
#include<cstring>

using namespace std;

struct student{
    int age;
    string name;
    float percentage;
};
 void print (struct student *st){
     st -> age=21;
     st -> name="shine";
     st -> percentage=91.0;
    cout<<"\nValues after being passed to function and modified\n";
        cout<<"AGE of the student"<<" "<<st -> age<<endl;
        cout<<"NAME of the student"<<" "<<st -> name<<endl;
        cout<<"PERCENTAGE of the student"<<" "<<st -> percentage<<endl;


 }
int main() {
    struct student student1;
    student1.age=20;
    student1.name="Deepa";
    student1.percentage=90;

    cout<<"Values before being passed to function\n";
        cout<<"AGE of the student"<<" "<<student1.age<<endl;
        cout<<"NAME of the student"<<" "<<student1.name<<endl;
        cout<<"PERCENTAGE of the student"<<" "<<student1.percentage<<endl;

   //calling function
        print(&student1);

    cout<<"\nValues after passed to function and modified\n";
        cout<<"AGE of the student"<<" "<<student1.age<<endl;
        cout<<"NAME of the student"<<" "<<student1.name<<endl;
        cout<<"PERCENTAGE of the student"<<" "<<student1.percentage<<endl;




        return 0;

}
