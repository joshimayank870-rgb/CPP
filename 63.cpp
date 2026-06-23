#include<iostream>
using namespace std;
class num{
    public:
    int a , b;
    void num1(int z , int v){
        a = z;
        b = v;
        
       
       
    }
    void pirnt(){
         cout<<a <<"+"<<"i"<<b<<endl;
    }
    num operator+(num obj){
        num c ; 
        c.a = a + obj.a;
        c.b = b + obj.b;
        return c;
    }


};
int main (){
    num e; 
    num x ;
    num h;
    num aa;
    e.num1(2,4);
    x.num1(5,6);
    
   

    h = e + x ;
     h.pirnt();
  
    return 0;
 
}
