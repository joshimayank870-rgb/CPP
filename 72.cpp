#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout.width(10);
    cout.fill('*');
    cout<<50<<endl;
   
    cout<<setw(20);
    cout<<setfill('&');
    cout<<90;
 return 0;
}
