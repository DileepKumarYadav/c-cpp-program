#include<iostream>
using namespace std;
void leapyear(int);
int main()
{
    int year;
    cout<<"Enter year to check leap year\n";
    cin>>year;
    leapyear(year);
    return 0;
}
void leapyear(int year)
{
    if(year%400==0||year%100!=0&&year%4==0)
    {
    cout<<"leap year\n";
    }
    else
    {
        cout<<"non leap year";
    }
    
    
}