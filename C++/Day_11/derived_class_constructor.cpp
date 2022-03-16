#include<iostream>
using namespace std;
class base
{
	int x;
	public:
	base()
	{
		cout<<"Base constructor"<<endl;
	}
	base(int a)
	{
		cout<<"base para constructor"<<endl;
	}
	~base()
	{
		cout<<"Destructor"<<endl;
	}
};
class derived : public base
{
	int y;
	public:
	derived()
	{
		cout<<"derived default constructor"<<endl;
	}
	derived(int i)
	{
		cout<<"derived para constructor"<<endl;
	}
	~derived()
	{
		cout<<"derived destructor"<<endl;
	}
};
int main()
{
	base b;
	derived d1;
	derived d2(10);
}
