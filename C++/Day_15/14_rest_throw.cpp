#include<iostream>
using namespace std;
void Demo()throw(int ,double)
{
	int a=1.5;
	if(a==1)
		throw a;
	else if(a==2)
		throw 'A';
	else if(a==4.5)
		throw 4.5;
	else
		cout<<"......"<<endl;
}
int main()
{
	try
	{
		Demo();
	}
	catch(int n)
	{
		cout<<"Exception handling"<<endl;
	}

}
