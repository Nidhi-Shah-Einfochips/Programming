#include<iostream>
using namespace std;
class base
{
	public:
		int b;
		void show()
		{
			cout<<"\nb="<<b<<endl;
		}
};
class derived : public base
{
        public:
                int d;
                void show()
                {
                        cout<<"\nb="<<b<<"d="<<d<<endl;
                }
};
int main()
{
	base b1;
	derived d1;
	base *ptr;
	ptr=&b1;
	ptr->b=100;
	ptr->show();
	ptr=&d1;
	ptr->b=200;
	ptr->show();
	derived *dptr;
	dptr=&d1;
	dptr->d=300;
	dptr->show();
	return 0;
}
