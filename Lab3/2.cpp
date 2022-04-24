#include<iostream>
using namespace std;
class circle
{
    int r,area;
    #define PI 3.142
    public:
    void getradius()
    {
        cout<<"Enter the radius :"<<endl;
        cin>>r;
    }
    void printarea()
    {
        area=PI*r*r;
        cout<<"The area of circle is :"<<area;
    }
};
int main()
{
    circle c;
    c.getradius();
    c.printarea();
    return 0;
}