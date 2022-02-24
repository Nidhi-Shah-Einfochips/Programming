//BY NIDHI SHAH
//unary operator using friend function
#include<iostream>
using namespace std;
class unaryfriend
{
	int a=10;
	int b=20;
	int c=30;
	public:
	void getvalues()
	{
		cout<<"Values of A B C "<<endl;
		cout<<a<<endl<<b<<endl<<c<<endl;
	}
	void showvalues()
	{
		cout<<a<<endl<<b<<endl<<c<<endl;
	}
	 friend unaryfriend operator -(unaryfriend &x);
};
unaryfriend operator -(unaryfriend &x)
{
	unaryfriend temp;
	temp.a=-x.a;
	temp.b=-x.b;
	temp.c=-x.c;
	return temp;
}
int main()
{
	unaryfriend x1;
	x1.getvalues();
	cout<<"BEFORE OVERLOADING"<<endl;
	x1.showvalues();
	cout<<"AFTER OVERLOADING"<<endl;
	unaryfriend x2;
       	x2=-x1;
	x2.showvalues();
	return 0;
}
