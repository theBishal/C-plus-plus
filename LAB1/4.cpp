//WAP to find whether the given number is prime or not
#include<iostream>
using namespace std;
class check
{
    int n;
    public:
    void get()
    {
        cout<<"Enter the number :"<<endl;
        cin>>n;
    }
    void cal()
    {
        int c,i;
        c=0;
        for(i=1;i<=n;i++)
        if (n%i==0)
        {
            c++;
        }
        if(c==2)
        {
            cout<<"The given number is prime";
        }else
        {
            cout<<"The given number is not prime";
        }
    
    }
};
int main()
{
    check n1;
    n1.get();
    n1.cal();
    return 0;
}