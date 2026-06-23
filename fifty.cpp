#include <iostream>
using namespace std;
class student
{
private:
    int n = 33;
    friend class couch;
};
class couch
{
public:
    student boj;
    void name(student boj)
    {
        cout << "the value of n is " << boj.n << endl;
    }
};
int main()
{
    student x;
    couch y;

    y.name(x);
    return 0;
}