#include<iostream>
using namespace std;
int main()
{

int n1,n2;
cout<<"Number 1:"<<endl;
cin>>n1;
cout<<"Numner 2:"<<endl;
cin>>n2;
try
{
	if(n2!=n1)
	{
		float div=(float)n1/n2;
		if(div<0)
			throw 'e';
		cout<<"n1/n2="<<div<<endl;
	}
	else
		throw n2;
}
catch(int e)
{
	cout<<"Exception divide by zero"<<endl;
}
catch(char st)
{
	cout<<"exception division less than 1"<<endl;
}
catch(...)
{
        cout<<"Exception :unknow"<<endl;
}

return 0;
}
