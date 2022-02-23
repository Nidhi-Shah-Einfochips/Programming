#include<iostream>
using namespace std;
int cubevolume(int l =5,int b=6,int w=7)
{
	return l*b*w;
}
int main()
{
	cout<<cubevolume()<<endl;
	cout<<cubevolume(5,5,1)<<endl;
	return 0;
}
