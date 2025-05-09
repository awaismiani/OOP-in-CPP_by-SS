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
    Distance minus(Distance dect)
    {
        Distance tempd;
        tempd.inch = inch - dect.inch;
        tempd.feet = feet - dect.feet;
        if(tempd.inch < 0)
        {
            tempd.inch += 12;
            tempd.feet--;
        }
        return tempd;
    }

};
int main()
{
    
    Distance d1;
    Distance d2, d3;

    d1.get(5,5);
    d2.get(4,5);
    d3 = d1.minus(d2);
    cout<<" d1 - d 2 =";
    d3.display();


    
    

}