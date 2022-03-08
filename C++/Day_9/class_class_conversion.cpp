// this program is to convert class to class conversion
#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
	Time(int h, int m)
	{
		hrs=h;
		min=m;
	}
	Time()
	{
		cout<<"\n TIME OBJECT CREATED";
	}
	int getminute()
	{
		int tot_min=(hrs*60)+min;
		return tot_min;
	}
	void display()
	{
		cout<<"HOURS : "<<hrs<<endl;
		cout<<"MINUTES : "<<min<<endl;
	}
};
class Minute
{
	int min;
	public:
	Minute()
	{
		min=0;
	}
	void operator=(Time T)
	{
		min=T.getminute();
	}
	void display()
	{
		 cout<<"TOTAL MINUTES : "<<min<<endl;
	}
};
int main()
{
	Time t1(2,30);
	t1.display();
	Minute m1;
	m1=t1;
	cout<<"conversion from time to minute "<<endl;
	t1.display();
	m1.display();
	return 0;
}



