#include<iostream>
using namespace std;
class ABC
{
	public:
		void display()
		{
			cout<<"This is parent class"<<endl;
		}

};
class XYZ : public ABC
{
	public:
		void display()
		{
			cout<<"\n this is child class"<<endl;
		}
};
int main()
{
	XYZ x;
	x.display();
	x.ABC::display();
	return 0;
}
