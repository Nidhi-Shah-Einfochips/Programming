//basic to class type conversion with constructor
#include<iostream>
using namespace std;
class Time
{
	int hour,min;
//	float hour,min;

	public:
	Time(int x)
	{
		cout<<"******BASIC TO CLASS ************"<<endl;

	hour = x/60;
	min = x % 60;
	}
	void display()
	{
		cout<<"hOURS: "<<hour<<endl;
		cout<<"MINUTES: " <<min<<endl;

	}

};
int main()
{
	float duration;
	cout<<"Enter the duration"<<endl;
	cin>>duration;
	Time t1 = duration;
	t1.display();
	return 0;
}
// we are sending input as basic we want to convert that to class type 
// float input
//
