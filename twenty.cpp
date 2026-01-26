#include<iostream>
using namespace std;
struct student 
 {
    int Sid;
    char name;
    float marks;

 };
 int main(){
    struct  student mayank;
    struct student sam;
    sam.Sid = 8398;
    sam.name = 's';
    sam.marks = 53;
    cout<<sam.Sid<<endl<<sam.name<<endl<<sam.marks<<endl;

    mayank.Sid = 1099;
    mayank.name = 'm';
    mayank.marks = 64;
    cout<<mayank.Sid<<endl;
    cout<<mayank.name<<endl;
    cout<<mayank.marks<<endl;

    return 0;

 }

