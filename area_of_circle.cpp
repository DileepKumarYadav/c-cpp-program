#include<iostream>
using namespace std;
float area(int);
int main()
{
    int r;
    cout<<"Enter radious of cicle\n";
    cin>>r;
    cout<<"area of circle is     "<<area(r);
    return 0;
}
float area(int R)
{
    return(3.14*R*R);
}