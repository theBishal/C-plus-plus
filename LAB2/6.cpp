//WAP to called a function multiply() that takes in two arguments and then print the result
//Overload the funtion to a0 that takes no arguments  b0 that takes three arguments
#include<iostream>
using namespace std;
class number
{
    int a,b,c;
    public:
    void multiply()
    { 
        cout<<"The result is :"<<2*2<<endl;
    }
    void multiply(int a,int b,int c)
    {
        cout<<"The result is:"<<a*b*c<<endl;
    }
};
int main()
{
    number n;
    int a,b,c;
    cout<<"Enter three numbers :"<<endl;
    cin>>a>>b>>c;
    n.multiply();
    n.multiply(a,b,c);
    return 0;
}