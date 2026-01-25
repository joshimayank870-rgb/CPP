#include <iostream>
using namespace std;
int main () {
    int age ;
    cout<<"Enter your age\n";
    cin>>age;
    if ((age<18) && (age>0)) {
        cout<<"YOU ARE NOT ALLOWED TO VOTE\n"; 
    }
    else if (age<1){
        cout<<"YOU ARE NOT BORN\n";

    }
    else {
        cout<<"YOU ARE ALLOWED TO VOTE\n";

    }
    return 0;
}