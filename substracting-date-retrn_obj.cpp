#include <iostream>
using namespace std;
class Date
    {
        private:
        int day ,month,year;
    
        public:
        void get(int a, int b, int c)
        {
            year = a;
            month = b;
            day = c;
        }
        Date add(Date pobj)
        {
            Date temp;
            temp.day = day - pobj.day;
            temp.month = month - pobj.month;
            temp.year = year - pobj.year;
            if(temp.day < 0)  
            {
                temp.month--;
                temp.day += 30;
            }
            if(temp.month < 0)  
            {
                temp.year--;
                temp.month += 12;
            }
            return temp;
           
        }
        void dis()
        {
            cout<<"Final Date : "<<year<<":"<<month<<":"<<day<<endl;
        }
    };
int main()
{
    Date d1;
    Date d2;
    d1.get(5,8,25);
    d2.get(9,3,4);
    d1.add(d2);
    d1.dis();
    
}