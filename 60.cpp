#include<iostream>
using namespace std;
class point{
    public:
    int x , y;
    point(int a , int b){
        x = a ; 
y = b;

    }

    void getdata();
};
 void point:: getdata(){
    cout<<x <<"+" <<"i"<<y<<endl;

}
int main (){
    
    point d(4,5);
    d.getdata();
    return 0;


}
