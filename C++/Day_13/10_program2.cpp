#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()
		{
			cout<<"base"<<endl;
		}
};
class der1: public base
{
        public:
                 void show()
                {
                        cout<<"derv1"<<endl;
                }
};

class der2 : public base
{
        public:
                 void show()
                {
                        cout<<"derv2"<<endl;
                }
};
int main()
{
	der1 dv1;
	der2 dv2;
	base* ptr;
	ptr = &dv1;
	ptr->show();
	ptr = &dv2;
	ptr->show();
	return 0;
}


