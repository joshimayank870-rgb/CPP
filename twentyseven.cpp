#include<iostream>
using namespace std;
int main (){
    int num1;
    int num2;
    int num3;
    cout<<"ENTER THE FIRST NUMBER\n";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER\n";
    cin>>num2;
    cout<<"ENTER THE THIRD NUMBER\n";
    cin>>num3;
    if (num1>num2 && num1>3){
        cout<<"num1 is the largest"<<endl;

    }else if(num2>num3 && num2>num1){
        cout<<"num2 is the largest"<<endl;

    }else if (num3>num1 && num3>num2){
        cout<<"num3 is the largest"<<endl;
    }else {
        cout<<"invalid"<<endl;
    }
    return 0;
}