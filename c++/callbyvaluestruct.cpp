#include <iostream>
#include <cstring>

using namespace std;

struct student{
    int age;
    string name;
    int percentage;
};

void print (struct student st){
    st.age=21;
    st.name="shine";
    st.percentage=90;
    cout<<"\nOutput after the values passed and changed in function:\n\n";
    cout<<"age of student:"<<" "<<st.age<<endl;
    cout<<"name of student:"<<" "<<st.name<<endl;
    cout<<"percentage of student:"<<" "<<st.percentage<<endl;
}
int main() {
    struct student student1;
    student1.age=20;
    student1.name="Deepa";
    student1.percentage=90;
    cout<<"Values before being passed to function:\n\n";
    cout<<"age of student:"<<" "<<student1.age<<endl;
    cout<<"name of student:"<<" "<<student1.name<<endl;
    cout<<"percentage of student:"<<" "<<student1.percentage<<endl;
    
    print(student1);
     
    return 0;
}

