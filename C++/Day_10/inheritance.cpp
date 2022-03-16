#include<iostream>
using namespace std;
class person
{
	public:
		int a;
		 void fun1()
        {

        cout<<"Calling public"<<endl;
        }

	private:
		int b;
		 void fun1()
        {

        cout<<"Calling private"<<endl;
        }

	protected:
		int c;

	void fun3()
	{
		cout<<"Calling protected"<<endl;
	}
};
class doctor: private person
{
	public:
		int d;
		void c()
		{
	cout<<"doctor calling"<<endl;
		}

};
int main()
{
	doctor d1;
	person p1;
	d1.fun1();
	d1.fun2();
	d1.fun3();
	d1.c();
	return 0;
}

