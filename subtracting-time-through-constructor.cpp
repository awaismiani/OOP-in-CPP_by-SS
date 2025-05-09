#include<iostream>
using namespace std;

class Time
{
    private:
    int sec, min , hr;

    public:
    Time(int a, int b, int c)
    {
        hr = a;
        min = b;
        sec = c;
    }
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time add(Time pobj)
    {
        Time temp;
        temp.sec = sec - pobj.sec;
        temp.min = min - pobj.min;
        temp.hr = hr - pobj.hr;
        if(temp.sec < 0)  
        {
            temp.min--;
            temp.sec += 60;
        }
        if(temp.min < 0)  
        {
            temp.hr--;
            temp.min += 60;
        }
        if(temp.hr < 0)  
        {
            temp.hr += 12;
        }
        return temp;
    }

    void display()
    {
        cout<<"Final Time: "<<hr<<" : "<<min<<" : "<<sec<<endl;
    }

};
int main()
{
    Time t1(5,45,55), t2(8,20,10), t3;
    
    t3 = t1.add(t2);
    t3.display();
}