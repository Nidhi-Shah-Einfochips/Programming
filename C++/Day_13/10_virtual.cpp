#include<iostream>
using namespace std;
class shape
{
	protected:
		float x;
	public:
		void getdata()
		{
			cin>>x;
		}
		virtual float calculatorarea()=0;
		virtual void function()
		{
			cout<<"base function"<<endl;
		}

};
class square : public shape
{
	public:
		float calculatorarea()
		{
			return x*x;
		}
		void function()
		{
			cout<<"Derived function"<<endl;
		}
};
class circle : public shape
{
        public:
                float calculatorarea()
                {
                        return 3.14*x*x;
                }
		void display()
		{
			cout<<"derived 2 "<<endl;
		}
};

int main()
{
	square s;
	circle c;
//	s.getdata();
//	cout<<s.calculatorarea();
//	c.getdata();
//	cout<<c.calculatorarea();
	c.function();
	return 0;
}


