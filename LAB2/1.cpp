//WAP to called a function multiply() that takes two arguments and return the two multiplied values.
#include<iostream>
using namespace std;
class mul
{
    int n1,n2,m;
    public:
    inline void multiply()
    {
        cout<<"Enter two numbers :"<<endl;
        cin>>n1>>n2;
        m=n1*n2;
        cout<<"The multiplied value is :"<<m;

    }
};
int main()
{
    mul multiply1;
    multiply1.multiply();
    return 0;
}