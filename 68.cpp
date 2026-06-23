#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void rollno_1(int a)
    {
        rollno = a;
        cout << "your rollno is " << rollno << endl;
    }
};
class marks : virtual public student
{
protected:
    int marks;
    int marks1;

public:
    void marks_1(int b, int c)
    {
        marks = b;
        marks1 = c;
        cout << "your marks in maths and physics are " << marks << marks1 << endl;
    }
};
class sports : virtual public student
{
protected:
    int sport;

public:
    void score(int e)
    {
        sport = e;
        cout << "your score in sports are " << sport << endl;
    }
};
class result : public marks, public sports
{
public:
    void result2()
    {
        int v;
        v = marks + marks1 + sport;
        cout << "your marks and score sum is " << v << endl;

        rollno_1(1099);
    }
};
int main()
{
    result mayank;
    mayank.score(19);
    mayank.marks_1(24,45);
    mayank.result2();
    return 0;
}