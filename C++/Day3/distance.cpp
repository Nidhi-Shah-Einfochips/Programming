// BY NIDHI SHAH
// THIS CODE IS TO SHOW CONSTRUCTOR AND DESTRUCTOR
#include<iostream>
using namespace std;
class Distance
{
	public:
		int feet;
		int inch;
		Distance(int f,int i)// parameterized constructor
		{
			feet=f;
			inch=i;
			cout<<"feet: "<<feet<<"inch : "<<inch<<endl;
			cout<<"Constructor"<<endl;
		}
		Distance(Distance &x)//copy constructor
		{
			feet=x.feet;
			inch=x.inch;
			cout<<"constructor again"<<endl;

		}
		~Distance()
		{
			cout<<"Destructor"<<endl;
		}


};
int main()
{
	

	Distance d1(10,5);
	Distance d2(d1);
//Distance d3=d1;
	return 0;
}

