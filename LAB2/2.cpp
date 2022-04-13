//WAP to find largest of three numbers.Make the function inline
#include<iostream>
using namespace std;
class large
{
    int n1,n2,n3;
    public:
    inline void get()
    {
        cout<<"Enter three numbers :"<<endl;
        cin>>n1>>n2>>n3;
    }
    inline void cal()
    {
        if (n1>n2 && n1>n3)
        {
            cout<<"THe Largest number is :"<<n1;
        }else if(n2>n1 && n2>n3)
        {
            cout<<"The Largest number is :"<<n2;
        }else{
            cout<<"The Largest number is :"<<n3;
        }
        
    }
};
int main()
{
    large l;
    l.get();
    l.cal();
    return 0;
}