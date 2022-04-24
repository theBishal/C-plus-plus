#include<iostream>
using namespace std;
class Large
{
    int n1,n2;
    public:
    void get()
    {
        cout<<"Enter the first number"<<endl;
        cin>>n1;
        cout<<"Enter the second number"<<endl;
        cin>>n2;
    }
    void put(int a)
    {
        cout<<a<<endl;
    }
    void largest()
    {
        if(n1>n2){
            put(n1);
        }
        else{
            put(n2);
        }

    }
    
};
int main()
{
    Large l;
    l.get();
    l.largest();
    return 0;

}