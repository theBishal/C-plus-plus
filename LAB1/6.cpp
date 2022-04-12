//WAP that calls a function called getarea().THis function is responsible for reading 
//two integer numbers(length and breadth) and prints its area.
#include<iostream>
using namespace std;
class function
{
    private:
    int l,b,a; 
    public:
    void getarea()
    {
        cout<<"Enter the length and breadth"<<endl;
        cin>>l>>b;
        a=l*b;
        cout<<"The area is :"<<a;
    }
};
int main()
{
    function area;
    area.getarea();
    return 0;
}