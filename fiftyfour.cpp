#include <iostream>
using namespace std;
class employee
{
    int s1;
    int s2;

public:
    void getdata()
    {
int v1,v2;
        s1 = v1;
        s2 = v2;
    }
    void getdatasum(employee p1, employee p2)
    {

        s1 = p1.s1 + p2.s1;
        s2 = p1.s2 + p2.s2;
    }
void num(){   
    cout<<"enter the number"<<endl;
    cin>>s1>>s2;
}
    void printdata();
};
void employee ::printdata()

{

    cout << "the complex sum of the" << s1 << "+" << s2 << "i" << endl;
}
int main()
{
    employee c1, c2, c3 ;

    c1.getdata();
    c1.num();
    c1.printdata();
    c2.getdata();
    c2.num();
    c2.printdata();
    c3.getdatasum(c1, c2);
    c3.printdata();
    return 0;
}