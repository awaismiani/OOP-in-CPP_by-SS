#include<iostream>
using namespace std;
class Date 
{
    private:
    int day, month, year;
    public:
    void get(int a, int b, int c)
    {
        year = a;
        month = b;
        day = c;
    }
    Date sum(Date pobj)
    {
        Date temp;
        temp.day = day + pobj.day;
        temp.month = month + pobj.month;
        temp.year = year + pobj.year;
        if(temp.day >= 30)
        {
            temp.month++;
            temp.day -= 30;
        }
        if(temp.month >= 12)
        {
            temp.year++;
            temp.month -= 12;
        }
        return temp;
    }
    void sum(Date pobj, Date pobj2)
    {
        day = pobj.day + pobj2.day;
        month = pobj.month + pobj2.month;
        year = pobj.year + pobj2.year;
        if(day >= 30)
        {
            month++;
            day -= 30;
        }
        if(month >= 12)
        {
            year++;
            month -= 12;
        }
    }
    void dis()
    {
        cout<<"Final Time :"<<year<<":"<<month<<":"<<day<<endl;
    }

};
int main()
{
    Date obj1,obj2,obj3;

    obj1.get(5,11,25);
    obj2.get(6,6,15);
    obj3.sum(obj1,obj2);
    obj3.dis();

    obj3 = obj1.sum(obj2);
    obj3.dis();
}
