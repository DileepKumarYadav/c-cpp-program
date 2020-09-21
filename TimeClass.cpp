#include<iostream>
using namespace std;
class Time
{
    private:
        int Hr,Min,Sec;

    public:
       void setTime(int h,int m,int s)
{
Hr=h;
Min=m;
Sec=s;
}
void showtime()
{
    cout<<endl<<Hr<<":"<<Min<<":"<<Sec;
}
void normalize()
{
    Min=Min+(Sec/60);
    Sec=Sec%60;
    Hr=Hr+(Min/60);
    Min=Min%60;

}
};



int main()
{
    Time t;
    t.setTime(10,100,100);
    t.showtime();
    t.normalize();
    t.showtime();
}