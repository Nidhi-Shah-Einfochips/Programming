#include<iostream>
using namespace std;
class person
{
	public:
	void fun1()
	{
		cout<<"In person"<<endl;
	}
};
/*class student : public person
{
	public:
	void fun2()
	{
		cout<<"in student"<<endl;
	}
};
*/
class student : private person
{
        public:
        void fun4()
        {
                cout<<"in student"<<endl;
        }
};

class itstudent : public student
{
	public:
	void fun3()
	{
		cout<<"in itstudent"<<endl;
	}
};
int main()
{
	itstudent i1;
//	i1.fun2();
	student s1;
	s1.fun1();
	s1.fun4();
	i1.fun1();
	return 0;
}
