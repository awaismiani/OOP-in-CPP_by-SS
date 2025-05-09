#include <iostream>
using namespace std;

class Distance
{
    private:
    int inches, feet;
    public:
    Distance(int a, int b)
    {
        inches = a;
        feet = b;
    }
    Distance()
    {
        inches = 0;
        feet = 0;
    }
    Distance add(Distance temp)
    {
        Distance temp2;
        temp2.inches = inches + temp.inches;
        temp2.feet = feet + temp.feet;
        if(temp2.inches >= 12)
        {
            temp2.feet++;
            temp2.inches -= 12;
        }
        return temp2;
    }
    void dis()
    {
        cout<<"Final Distance ="<<feet<<":"<<inches;
    }

};
int main()
{
    Distance d1(6,5), d2(8,7), d3;
    d3 = d1.add(d2);
    d3.dis();

}