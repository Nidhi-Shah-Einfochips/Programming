#include<iostream>
#include<ctime>
using namespace std;
class Time
{
	private:
		int hours;
		int minute;
		int second;
	public:
		Time(int h=0,int m=0,int s=0);
		void setTime();
		
		void getTime(int h=0,int m=0,int s=0);
		
		void sleepTime(Time);
		
};

Time::Time(int h,int m,int s)
{
	hours=h;
	minute=m;
	second=s;
}

void Time::setTime()
{
	time_t now=time(0);
	tm *ltm=localtime(&now);
	int h=5+ltm->tm_hour;
	int m=30+ltm->tm_min;
	int s=ltm->tm_sec;
	
	hours=h;
	minute=m;
	second=s;
	cout<<"Current Time is : "<<hours<<":"<<minute<<":"<<second<<endl;
}

void Time::getTime(int h,int m,int s)
{
	hours=h;
	minute=m;
	second=s;
	cout<<"User Time is : "<<hours<<":"<<minute<<":"<<second<<endl;
}

void Time::sleepTime(Time otherTime)
{
	if(hours!=otherTime.hours && minute!=otherTime.minute && second!=otherTime.second)
	{
		second=second-otherTime.second;
		minute=minute-otherTime.minute+(second/60);
		hours=hours-otherTime.hours+(minute/60);		
		cout<<"Time diffrence is : "<<hours<<":"<<minute<<":"<<second<<endl;	
	}
	else
	{
		cout<<"No time diffrence"<<endl;
	}
}

int main()
{
	Time t1;
	t1.setTime();
	Time t2;
	t2.getTime(10,50,59);
	t1.sleepTime(t2);
	
	return 0;
}
