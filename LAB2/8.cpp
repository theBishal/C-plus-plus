#include<iostream>
using namespace std;
class volume
{
    int l,b,h;
    float r;
    #define PI 3.142;
    public:
    void get()
    {
      cout<<"Enter the length:"<<endl;
      cin>>l;
      cout<<"Enter the breadth:"<<endl;
      cin>>b;
      cout<<"Enter the height:"<<endl;
      cin>>h;
      cout<<"Enter the radius:"<<endl;
      cin>>r;
    }
    void cylinder()
    {
        float cy;
        cy= r*r*h*PI;
        cout<<"The volume of cylinder is:"<<cy<<endl;

    }
    void cuboid()
    {
        int cu;
        cu=l*b*h;
        cout<<"The volume of cuboid is:"<<cu<<endl;
    }
    void cube()
    {
        int cb;
        cb=l*l*l;
        cout<<"The volume of cube is:"<<cb<<endl;
    }
};
int main()
{
    volume v;
    v.get();
    v.cylinder();
    v.cuboid();
    v.cube();
    return 0;
}