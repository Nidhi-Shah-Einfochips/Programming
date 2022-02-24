#include<iostream>
using namespace std;
int main()

{
	//declaration of variables
	int *ptr1,*ptr2,sum;
	//allocate the memory space
	ptr1= new int;
	ptr2=new int;
	cout<<"Enter first number: ";
	cin>>*ptr1;
	cout<<"Enter the second number : ";
	cin>>*ptr2;
	sum = *ptr1 + *ptr2;
	cout<<"sum of pointer = " <<sum;
	delete ptr1;//deleting the pointers
	delete ptr2;
	return 0;
}
