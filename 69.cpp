#include <iostream>
using namespace std;
class base
{
public:
   virtual void func()
    {
        cout << "this is func of base class" << endl;
    }
    void print()
    {
        cout << "this is print of base class" << endl;
    }
};
class derived : public base
{
public:
    void func()
    {
        cout << "this is func of derived class" << endl;
    }
    void print()
    {
        cout << "this is print of derived class" << endl;
    }
};
int main()
{
    base *num;
    derived b;
    num = &b;
    num -> func();
    num-> print();

    return 0;
}