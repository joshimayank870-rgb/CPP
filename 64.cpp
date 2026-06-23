#include<iostream>
using namespace std;
class func{
    public:
   static int a  ;
    func(){
      a++;
        cout<<"this is the time my constructor will run "<<a<<endl;


    }
    ~func(){
         a--;
        cout<<"this is the time my destructor will run"<<a<<endl;
      
    }
  
};
 int func :: a =0;
int main (){
    func aa , bb, cc;
    
       func ee;
    
    return 0;
   
}

