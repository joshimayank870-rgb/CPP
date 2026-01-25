#include <iostream>
using namespace std;
int main(){
    int a ,   b;
    string operation;
    cout << "enter the first number: ";
    cin>> a;
    cout<< "enter the operation : ";
    cin>> operation;
    cout<<"enter the third number : ";
    cin>>b;
    if (operation == "+"){
        cout<< a + b;

    }else if(operation =="-"){
        cout<< a- b;


    }else if (operation == "*"){
        cout<< a *b;

    }else if (operation == "/"){
        cout<<a/b;

    }
    else{
        cout<<"enter another number";
    }
    
    return 0;
}