#include <iostream>
using namespace std;

union name
{
    int rollno;
    int notclass;
    char studentname;
};

int main()
{
    union name mi;

    mi.rollno = 463;
    cout << mi.rollno << endl;

    mi.notclass = 5;
    cout << mi.notclass << endl;

    mi.studentname = 'm';
    cout << mi.studentname << endl;

    return 0;
}
