#include<iostream>
using namespace std;
class sum
{
    int a,b,sum;
    public:
    void get()
    {
        cout<<"Enter the first and second number :"<<endl;
        cin>>a>>b;
    }
    void cal()
    {
        sum=a+b;
        cout<<"The sum is :"<<sum;
    }
};
int main()
{
    sum s;
    s.get();
    s.cal();
    return 0;
}