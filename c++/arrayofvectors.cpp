#include<iostream>
#include<vector>

using namespace std;


//Declaring array of vectors
vector<int> v[5];

//Function for inserting elements in array of vectors
void insertarray() {
    for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
    v[i].push_back(j);
        }
    }
}

//function to print elements in an array

void printarray(){
    for(int i=0;i<5;i++){
    cout<<"Element at index"<<i<<":";

    for(vector<int>::iterator it = v[i].begin();it != v[i].end(); it++) { 
            cout<< *it<<' ';
        }
    cout<<endl;
        }

        }

//main function
int main(){
    insertarray();
    printarray();

    return 0;
}
