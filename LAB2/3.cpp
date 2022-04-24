//Using inline function conver Fahrenheit to Centigrade
#include<iostream>
using namespace std;
class convert
{
    float f;
    public:
    inline void get()
    {
        cout<<"Enter the temperature in Fahrenheit :"<<endl;
        cin>>f;
    }
    inline void cal()
    {   
        float c;
        c=5*(f-32)/9;
        cout<<"The temperature in centigrade is :"<<c<<endl;
    }
};
int main()
{
    convert tem;
    tem.get();
    tem.cal();
    return 0;
}