#include<iostream>
using namespace std;

class Time
{
    private:
    int sec, min , hr;
    public:
    void get(int a, int b, int c)
    {
        hr = a;
        min = b;
        sec = c;
    }

    Time add(Time pobj)
    {
        Time temp;
        temp.sec = sec + pobj.sec;
        temp.min = min + pobj.min;
        temp.hr = hr + pobj.hr;
        if(temp.sec >= 60)  
        {
            temp.min++;
            temp.sec -= 60;
        }
        if(temp.min >= 60)  
        {
            temp.hr++;
            temp.min -= 60;
        }
        if(temp.hr >= 12)  
        {
            temp.sec -= 12;
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
    Time t1, t2, t3;
    t1.get(4,34,55);
    t2.get(2,30,23);
    t3 = t1.add(t2);
    t3.display();
}