//WAP to call a function add().And take two integers and prints the sum.
#include<iostream>
using namespace std;
class total
{
    int n1,n2,sum;
    public:
    void add()
    {
        cout<<"Enter the two numbers :"<<endl;
        cin>>n1>>n2;
        sum=n1+n2;
        cout<<"The sum is :"<<sum;
    }
};
int main()
{
    total t;
    t.add();
    return 0;
}