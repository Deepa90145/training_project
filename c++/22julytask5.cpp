#include<iostream>
#include<string.h>

using namespace std;

	struct students{

	char name[20];
	int age ;
	float percentage;

	};

	struct studentcopy {

	char name[20];
	int age ;
	float percentage;

	};

	void print (struct students student);

	int main() {

	struct students student1,student2;
	struct studentcopy stu;

	strcpy(student1.name,"Deepa");
	student1.age=20;
	student1.percentage=90;


	strcpy(student2.name,"Deepa");
	student2.age=20;
	student2.percentage=90;

	print(student1);
	print(student2);

	strcpy(stu.name,student1.name);
	stu.age=student1.age;
	stu.percentage=student1.percentage;

	cout<<"data of student1 copied\n";
	cout<<"name of the student is"<<stu.name<<endl;
	cout<<"age of the student is"<<stu.age<<endl;
	cout<<"percentage of the student is"<<stu.percentage<<endl;

	return 0;
	}

	void print(struct students student){
	cout<<"name of the student is"<<student.name<<endl;
	cout<<"age of the student is"<<student.age<<endl;
	cout<<"percentage of the student is"<<student.percentage<<endl;
	}
