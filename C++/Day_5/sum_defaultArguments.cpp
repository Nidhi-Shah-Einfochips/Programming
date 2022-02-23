// BY NIDHI SHAH
// THIS CODE IS TO DIFFERENT ARGUMENTS AND FUNCTION OVERLOADING
#include<iostream>
using namespace std;

int sum(int i);
char sum(char i);
float sum(float i,int k);
int main()
{
	cout<<"sum : "<<sum(10)<<endl;
	cout<<"sum : "<<sum('A')<<endl;
	cout<<"sum  : "<<sum(10.5f,5)<<endl;
	return 0;
}
int sum(int i)
{
	return i;
}
char sum(char i)
{
	
	return i ;
}
float sum(float i,int k)
{
	
	return i+k;
}

