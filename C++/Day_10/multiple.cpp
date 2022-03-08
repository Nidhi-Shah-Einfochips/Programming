

#include<iostream>
using namespace std;
class liquid 
{
	public:
	void fun1()
	{
		cout<<"liquid"<<endl;
	}
};
class fuel
{
	public:
		void fun2()
		{
			cout<<"fuel"<<endl;
		}
};
class petrol : public liquid ,public fuel
{
	public:
		void fun3()
		{
			cout<<"petrol"<<endl;
		}
};
int main()
{
	petrol p1;
	p1.fun1();
	p1.fun2();
	return 0;
}

