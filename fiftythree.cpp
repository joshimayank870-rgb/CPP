#include <iostream>
using namespace std;
class emp
{
public:
    static int a;
    static void name()
    {
        
       cout<< a++;
    }

   
};
 int emp::a = 0;
int main()
{
    emp o1, o2, o3;
  o1.name();
  o2.name();
  o3.name();
    return 0;
}
