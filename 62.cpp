#include <iostream>
using namespace std;
class point
{
public:
    int num1 = 80, num2 = 60;

    point(int a , int b  )
    {

        num1 = a;
        num2 = b;
       
    }
    point(point &obj)
    {
        num1 = obj.num1;
        num2 = obj.num2;
        cout<<"this is value of num1 "<<obj.num1<<endl;
        cout<<"this is value of num2"<<obj.num2<<endl;
    }
};
int main()
{
    point aa(4,5), bb(0 , 0);
    point o(aa);
    point ab(bb);
    return 0;
}