#include<iostream>
using namespace std;
int main(){
    int a[]={54,78,45,75,88};
    int *b = a;
    cout<<"the first value \n"<<*a<<endl;
    cout<<"the second value \n"<<*(a+1)<<endl;
    a[2]=32;
    cout<<"the third value \n"<<*(a+2)<<endl;
    cout<<"the fourth value \n"<<*(a+3)<<endl;
    cout<<"the fifth value \n"<<*(a+4)<<endl;
    return 0;
}