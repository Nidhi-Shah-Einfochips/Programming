// BY NIDHI SHAH
// MEMBER FUNCTION OVERLOADING 
//
#include<iostream>
using namespace std;
class A
{
	int n;
	public:
	void data(int x)
	{
		x=i;
	}
	friend void max (A,B);

};
class b
{
	public:
		void data(int i)
		{
			y=i;
		}
		friend void max(A,B);
};
void max(A a,B b)
{
	if(a.x>=b.y)
		cout<<a.x<<endl;
	else
		cout<<b.y<<endl;
}

int main()
{
	A a;
	b B;
	a.data(10);
	b.data(20);
	max(a,b);
	return 0;
}
