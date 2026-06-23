#include <iostream>
using namespace std;
class exam
{
public:
    int rollno;
    char name;
    void get_rollno(int x)
    {
        rollno = x;

        cout << "child rollno" << rollno << endl;
    }
    void set_rollno(char y)
    {
        name =y;
        cout << "child name is " <<endl << name << endl;
    }
};
class marks : public exam
{
public:
    int maths, physics;
    void get_marks(int bc, int ab)

    {
        maths  = bc ;
        physics  = ab;
        cout << "child marks in maths are" << maths << endl;
        cout << "child marks in physics are" << physics << endl;
    }
};
class percentage : public marks
{
public:
    void percentage1()
    {
        cout << "child percentage is " << (maths + physics) / 2 << endl;
    }
    void namespace2(){
         get_rollno(1099);
        set_rollno('m');
        get_marks(100, 40);
        percentage1();
    }
};
int main()
{
    percentage mayank;
    mayank.namespace2();
    return 0;
}