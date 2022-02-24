//CODE OF NEW AND DELETE WITH CONSTRUCTOR using class
#include<iostream>
using namespace std;
class A
{
	public:
		int i,j;
		A()
		{
			cout<<"INSIDE THE CONST"<<endl;
			i=0;
			j=10;
		}
};
int main()

{
        //declaration of variables
        int *ptr1,*ptr2,sum;
	A a1,*a2;

        //allocate the memory space
        ptr1= new int;
        ptr2=new int;
	cout<<"BEFORE THE NEW OPERATOR IN A\n";
	a2=new A;
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

