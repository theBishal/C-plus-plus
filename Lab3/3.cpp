#include<iostream>
using namespace std;
class square
{
    int area,perimeter,l;
    public:
    void getlength()
    {
        cout<<"Enter the length"<<endl;
        cin>>l;
    }
    void printarea()
    {
        area=l*l;
        cout<<"The area of square is :"<<area<<endl;
    }
    void printperimeter()
    {
        perimeter=4*l;
        cout<<"The perimeter of square is :"<<perimeter;
    }
};
int main()
{
    square s;
    s.getlength();
    s.printarea();
    s.printperimeter();
    return 0;
}