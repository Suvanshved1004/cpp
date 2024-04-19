#include<iostream>
using namespace std;
class Time
{
	int hour;
	int min;
	int sec;
	public: Time (int h=0,int m=0,int s=0)
	{
		hour=h;
		min=m;
		sec=s;
	}
	void ShowTime()
	{
		cout<<hour<<":"<<min<<":"<<sec<<"\n";
	}
	
	Time operator -(Time t)
	{
	    int total_seconds1 = hours * 3600 + minutes * 60 + seconds;
        int total_seconds2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diff_seconds = total_seconds1 - total_seconds2;

        int h = diff_seconds / 3600;
        int m = (diff_seconds % 3600) / 60;
        int s = (diff_seconds % 3600) % 60;

        return Time(h, m, s);	
	}
	
};


int main()
{
	Time t1(2,30,45);
	Time t2(1,15,10)
	Time D
	
	return 0;
}

