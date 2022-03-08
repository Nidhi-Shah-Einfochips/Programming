// This program is to demostrate class type to basic type conversion
#include<iostream>
using namespace std;
class Time
{
	int hrs,mins;
	public:
	Time(int,int);
	//constructor
	operator int();
	//casting operator function
	~Time()
	//Destructor
	{
		cout<<"Destructor called..."<<endl;
	}
};
Time::Time(int a,int b)
{
	cout<<"Constructor called with two parameters..."<<endl;
	hrs=a;
	mins=b;
}
Time:: operator int()
{
	cout<<"class type to basic type conversion...."<<endl;
	return(hrs*60+mins);
}
int main()
{
	int h,m,duration;
	cout<<"ENTER HOURS: ";
	cin>>h;
	cout<<"ENTER MINUTES :";
	cin>>m;
	Time t(h,m);//constructor object
	duration = t; //casting conversion or duration=int(t)
	cout<<"TOTAL MINUTES ARE : "<<duration<<endl;
	cout<<"2 method operator overloading"<<endl;
	duration=t.operator int();
	cout<<"TOTAL MINUTES ARE: "<<duration<<endl;
	return 0;
}
