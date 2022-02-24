// new keyword 
#include<iostream>
using namespace std;
int main()
{
	int *pt = new int;
	*pt =55;
	cout<<"value "<<*pt<<endl;
	cout<<"address of pt = "<<pt<<endl;
	cout<<"Sizeof int var = "<<sizeof(*pt)<<endl;
	cout<<"size of pointer = "<<sizeof(pt)<<endl;
	cout<<"Address of int pointer = "<<&pt<<endl;
	return 0;
}
