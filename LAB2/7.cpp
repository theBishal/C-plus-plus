#include<iostream>
using namespace std;
class area
{
    int l,b;
    float r;
    #define PI 3.142
    public:
    void get()
    {
        cout<<"Enter the length:"<<endl;
        cin>>l;
        cout<<"Enter the breadth:"<<endl;
        cin>>b;
        cout<<"Enter the radius:"<<endl;
        cin>>r;
    }
    void square()
    {
        int sq;
        sq=l*l;
        cout<<"The area of square is:"<<sq<<endl;
    }
    void rectangle()
    {
        int rec;
        rec=l*b;
        cout<<"The area of rectangle is:"<<rec<<endl;
    }
    void circle()
    {
        float ci;
        ci=PI*r*r;
        cout<<"The area of circle is:"<<ci<<endl;
    }
};
int main()
{
    area a;
    a.get();
    a.square();
    a.rectangle();
    a.circle();
    return 0;
}