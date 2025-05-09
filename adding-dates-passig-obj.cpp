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
        void add(Date pobj)
        {
            day += pobj.day;
            month += pobj.month;
            year += pobj.year;
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
            cout<<"Final Date : "<<year<<":"<<month<<":"<<day<<endl;
        }
        
    };

int main()
{
   Date t1;
   Date t2;
    t1.get(5,8,25);
    t2.get(9,3,4);
    t1.add(t2);
    t1.dis();
    
}