#include<iostream>
using namespace std;

class add
{
    public : int x,y;
             float a,b;
             add(int x,int y);
             void addfloat(float a,float b);
};
    add::add(int x,int y)
    {
        cout<<" Addition of "<<x<<" and " << y <<" is = "<<x+y<<endl;
    }
            
    void add::addfloat(float a,float b)
    {
        cout<<" Addition of "<<a<<" and " <<b<<" is = "<<a+b<<endl;
    }

int main()
{
    add obj(1,2);
    
    obj.addfloat(1.5,1.5);
    return 0;    
}
