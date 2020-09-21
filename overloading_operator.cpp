
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

 Time operator +(Time t)
 {
     Time temp;
     temp.Sec=Sec+t.Sec;
     temp.Min=Min+t.Min;
     temp.Hr=Hr+t.Hr;
     temp.normalize();
     return(temp);

 }
};



int main()
{
    Time t1,t2,t3;
    t1.setTime(5,35,45);
    t2.setTime(5,35,45);
    t1.showtime();
    t2.showtime();
    t3=t1+t2;//t3=t1.operator+(t2);
    t3.showtime();
}