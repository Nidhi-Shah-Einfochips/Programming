#include<iostream>
using namespace std;
void swap(int *n1,int *n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
int main()
{
	int a=10,b=20;
	cout<<"before "<<endl;
	cout<<"a: "<<a<<"b : "<<b<<endl;
	swap(&a,&b);
	cout<<"after "<<endl;
	cout<<"a : "<<a<<"b : "<<b<<endl;
	return 0;
}


