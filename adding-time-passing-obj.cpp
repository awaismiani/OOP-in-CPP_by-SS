#include <iostream>
using namespace std;
class TIME
    {
        private:
        int sec ,min,hr;
    
        public:
       
        void get(int a, int b, int c)
        {
            hr = a;
            min = b;
            sec = c;
        }
        void add(TIME pobj)
        {
            sec += pobj.sec;
            min += pobj.min;
            hr += pobj.hr;
            if(sec >= 60)
            {
                min++;
                sec -= 60;
            }
            if(min >= 60)
            {
                hr++;
                min -= 60;
            }
            if(hr >= 12)
            {
                hr -= 12;
            }
        }
        void dis()
        {
            cout<<"Final TIME : "<<hr<<":"<<min<<":"<<sec<<endl;
        }
        
    };

int main()
{
   TIME t1;
   TIME t2;
    t1.get(5,45,55);
    t2.get(9,33,4);
    t1.add(t2);
    t1.dis();
    
}