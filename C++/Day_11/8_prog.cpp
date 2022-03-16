#include<iostream>
using namespace std;
class base
{
	int i,j;
	public:
	void set(int a,int b)
	{
		i=a;
		j=b;
	}
	void show()
	{
		cout<<i<<" "<<j;
	}
};
class derived : public base //private
{
	int k;
	public:
	derived (int x)
	{
		k=x;
	}
	void showK ()
	{
		cout<<k;
	}
};
int main()
{
//	base ob;
	derived ob(3);// if it is private and derived object it will thorough error
	ob.set(1,2);
	ob.show();
	return 0;
}
