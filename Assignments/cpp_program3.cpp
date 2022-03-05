//piggie bank
//By NIDHI SHAH
#include<iostream>
using namespace std;
class Addamount
{
	int amount=50;
	public:
	Addamount()
	{
		cout<<"No amount will added to the piggie bank"<<endl;
	}
	Addamount(int a)
	{
		amount=amount+a;
	}
	void display()
	{
		cout<<"total amount is : "<<amount<<endl;
	}
};
int main()
{
	int amt;
	cout<<"-----------------calling constructor without parameter------------------"<<endl;
	Addamount a1;
	a1.display();
	cout<<"-----------------calling constructor with parameter amount-------------"<<endl;
	cout<<"Enter the amount you want to add in piggie bank "<<endl;
	cin>>amt;
	Addamount a2(amt);
	a2.display();
	return 0;
}
