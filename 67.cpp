#include <iostream>
using namespace std;
class print
{
public:
    int marks1;
    void base1(int c)
    {
        marks1 = c;
        cout << "your marks1 " << endl;
    }
};
class print1
{
public:
    int marks2;
    void base2(int d)
    {
        marks2 = d;
        cout << "your marks2" << endl;
    }
};
class print2
{
public:
    int marks3;
    void base3(int e)
    {
        marks3 = e;
        cout << " your marks3" << endl;
    }
};
class derived : public print, public print1, public print2
{
public:
    void base4()
    {
        base1(89);
        base2(44);
        base3(55);
        cout << "your marks in 1 ,2, 3 are " << marks1 << marks2 << marks3 << endl;
        cout << "addition of your marks " << marks1 + marks2 + marks3 << endl;
    }
};
int main()
{
    derived mayank;
    mayank.base4();
    return 0;
}