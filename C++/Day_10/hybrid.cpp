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
class fuel: public liquid
{
        public:
                void fun2()
                {
                        cout<<"fuel"<<endl;
                }
};
class disel : public liquid
{
	public:
		void fun4()
		{
			cout<<"disel"<<endl;
		}
};
class petrol : public disel ,public fuel
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
       // p1.fun1();
        p1.fun2();
	fuel f1;
	f1.fun1();
	disel d1;
	d1.fun1();

        return 0;
}


