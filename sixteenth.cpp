#include<iostream>
using namespace std;
int i=0;
int main(){
    int marks[]={50,30,54,90};
    cout<<"the marks of 1 are :"<<marks[0]<<endl;
    cout<<"the marks of 2 are :"<<marks[1]<<endl;
    cout<<"the marks of 3 are :"<<marks[2]<<endl;
    cout<<"the marks of 4 are :"<<marks[3]<<endl;
    
    for(i;i<4;i++){
        cout<<"the value of marks"<<i<<endl<<marks[i]<<endl;

    }
  return 0 ;




}