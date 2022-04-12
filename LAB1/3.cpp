//WAP to find x^y
#include<iostream>
using namespace std;
class power
{
    private:
    float x,y;

    public:
    void get()
    {
        cout<<"Enter the value of x"<<endl;
        cin>>x;
        cout<<"Enter the value of y"<<endl;
        cin>>y;
    }
    void cal()
    {
        int c,i;
        c=1;
        for(i=0;i<y;i++)
        {
            c*=x;
        }
        cout<<"The result is :"<<c;
        
    }
};
int main()
{
    power n;
    n.get();
    n.cal();
    return 0;
}