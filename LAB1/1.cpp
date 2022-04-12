//WAP to add two numbers
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
        int sum;
        sum=n1+n2;
        cout<<"The sum is "<<sum;
    }
};
int main()
{
    number n;
    n.get();
    n.cal();
    return 0;
}
