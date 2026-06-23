#include <iostream>
using namespace std;
class point
{
public:
    virtual void poin()
    {
        cout << "this is point of point class" << endl;
    }
    void print()
    {
        cout << "this is print of point class " << endl;
    }
};
class derived : public point
{
public:
    void poin()
    {
        cout << "this point of derived class" << endl;
    }
    void print()
    {
        cout << "this is print of derived class" << endl;
    }
};
int main()
{
    point *ob;
    derived a;
    ob = &a;
    ob->poin();
    ob->print();
    return 0;
}