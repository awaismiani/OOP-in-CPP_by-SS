#include<iostream>
using namespace std;
class Distance
{
    private:
    int inch;
    int feet;
    public:
    void get(int a, int b)
    {
        inch = a ;
        feet = b;
    }
    void display()
    {
        cout<<"Feet : "<<feet<<" Inches : "<<inch<<endl;
    }
    void add(Distance awais)
    {
        inch -= awais.inch;
        feet -= awais.feet;
        if(inch < 0 )
        {
            inch += 12;
            feet--;
        }
    }

};
int main()
{
    Distance obj1;
    Distance obj2;

    obj1.get(5,5);
    obj2.get(10,5);

    obj1.display();
    obj2.display();

    obj1.add(obj2);
    obj1.display();


}