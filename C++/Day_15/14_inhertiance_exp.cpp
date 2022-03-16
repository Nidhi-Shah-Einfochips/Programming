#include<iostream>
using namespace std;
class Base{};
class Derived: public Base{};
int main()
{
	try
	{
		throw Derived();
	}
	catch(Base b)
	{
		cout<<"Base object caught";
	}
	catch(Derived d)
	{
		cout<<"Derived object caught";
	}
	return 0;
}

