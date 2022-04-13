//Using inline function convert pounds tokilogram
#include<iostream>
using namespace std;
class convert
{
    float p,kg;
    public:
    inline void get()
    {
        cout<<"Enter the pounds :"<<endl;
        cin>>p;
    }
    inline void cal()
    {
        kg=p*0.453592;
        cout<<"KG ="<<kg;
    }
};
int main()
{
    convert c;
    c.get();
    c.cal();
    return 0;
}