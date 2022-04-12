//WAP to call function area().and takes radius of the circle and returns the area of circle.
#include<iostream>
using namespace std;
class circle
{
    float r,a;
    #define PI 3.142
    
    public:
    void area()
    {   
        cout<<"Enter the radius"<<endl;
        cin>>r;
        a=PI*r*r;
        cout<<"The area is :"<<a;

    }
};
int main()
{
    circle ar;
    ar.area();
    return 0;
}