#include<iostream>
#include<vector>

using namespace std;

//vector declared
vector <int> addelement;

int main() {

//taking input from user
cout<<"Enter any five positive numbers:"<<endl;
int input=0;
for(int i=0;i<5;i++){
    cin>>input;
    addelement.push_back(input);
    }


//displaying input entered by user
cout<<"Elements entered by user are:"<<endl;
for(int i=0;i<5;i++){
    cout<<addelement[i]<<endl;
    }


//deleting elements of vector
addelement.pop_back();
cout<<"Elements after one element got deleted:"<<endl;
for(int i=0;i<addelement.size();i++){
    cout<<addelement[i]<<endl;
    }

//displaying size of the vector
cout<<"Size of the vector is:"<<endl;
int n;
n=addelement.size();
cout<<n<<endl;

return 0;
}
