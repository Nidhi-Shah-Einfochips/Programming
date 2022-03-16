#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"class A"<<endl;
		}
};
class B
{
        public:
                void displayB()
                {
                        cout<<"class B"<<endl;
                }
};
class c :public A
{
        public:
                void displayc()
                {
                        cout<<"class C"<<endl;
                }
};
class D: public B
{
        public:
                void displayD()
                {
                        cout<<"class D"<<endl;
                }
};
class E: public c,public D
{
        public:
                void displayE()
                {
                        cout<<"class E"<<endl;
                }
};
class F:public E
{
        public:
                void displayF()
                {
                        cout<<"class F"<<endl;
                }
};
int main()
{
	A a;
	B b;
	c C;
	D d;
	E e;
	F f;
	a.displayA();
	b.displayA();
	b.displayc();
	b.displayD();
	f.displayA();
	f.displayc();
	f.displayB();
	f.displayE();
	e.displayA();
	e.displayB();
	e.displayc();
	return 0;
}
