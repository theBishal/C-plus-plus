/*WAP to called a function power.that raises a number n to power m where both m and are integers
use a default arguments pf 2 for m*/
#include<iostream>
using namespace std;
class pow
{
    int m,p,c,i,n;
    public:
    void power(int m)
    {
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        c=1;
        for(i=1;i<=m;i++)
        {
            c*=n;
        }
        cout<<"The value is :"<<c;
        

    }
};
int main()
{
    pow p1;
    p1.power(2);
    return 0;
    
}