// array with new and delete
#include<iostream>
using namespace std;
class A
{
	public:
	int i,j,k,l,m;
	A()
	{
		cout<<"INSIDE THE CONSTRUCTOR"<<endl;
		i=0;
		j=10;
	}
};
int main()
{
	int *ptr1,*ptr2,sum;
	A a1,*a2;
	ptr1= new int;
	ptr2=new int;
	int arr[5] = {0};
	A a[5];
	delete ptr1;
	delete ptr2;
	return 0;
}
