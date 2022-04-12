//WAP to display greatest number between two numbers
#include<iostream>
using namespace std;
class number
{
    private:
    int n1,n2;

    public:
    void get()
    {
        cout<<"Enter the first number :"<<endl;
        cin>>n1;
        cout<<"Enter the second number :"<<endl;
        cin>>n2;
    }
    void cal()
    {
        if (n1>n2)
        {
            cout<<"The greatest number is "<<n1;
        }else
        {
            cout<<"The greatest number is "<<n2;
        }
    }
};
int main()
{
    number n;
    n.get();
    n.cal();
    return 0;
}
