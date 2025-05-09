#include <iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"i am a constructor"<<endl;
    }
    test(int x)
    {
        cout<<"i am a 2nd constructor"<<x<<endl;
    }
    test(char y)
    {
        cout<<"i am a 3rd constructor"<<y<<endl;
    }

    void dis()
    {
        cout<<"i am a display funtion"<<endl;
    }
};
int main()
{
    test t1;
    t1.dis();
    test t2(4);
    test t3('d');
}
