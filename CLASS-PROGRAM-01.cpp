#include <iostream>
using namespace std;
class fectorial
{
    private :
    int num;
    int result = 1;

    public :
    void setter(int n)
    {
        num=n;
    }
    
    void factorial()
    {
        for(int i=1;i<=num;i++)
        {
            result *= i;
        }
        cout<<"Factorial : "<<result;
    }
};
int main()
{
    fectorial obj;
    int x;
    cin>>x;
    obj.setter(x);
    obj.factorial();
}