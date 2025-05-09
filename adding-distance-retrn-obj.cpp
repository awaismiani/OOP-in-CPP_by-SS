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
    Distance add(Distance Object)
    {
        Distance tempObj;
        tempObj.inch = inch + Object.inch;
        tempObj.feet = feet + Object.feet;
        if(tempObj.inch >=12)
        {
            tempObj.inch -= 12;
            tempObj.feet++;
        }
        return tempObj;
    }

};
int main()
{
    
    Distance obj1;
    Distance obj2, obj3;

    obj1.get(5,5);
    obj2.get(10,5);
    obj3.get(10,5);

    obj1.display();
    obj2.display();
    obj3.display();

    Distance result;
    result = obj1.add(obj2);
    cout<<" obj1 + obj 2 =";
    result.display();

    Distance result1;
    result1 = obj3.add(result);
    cout<<" obj1 + obj 2 + obj3 =";
    result1.display();
    
    obj1.display();

    obj2.display();

}