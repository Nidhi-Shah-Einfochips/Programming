#include<iostream>
using namespace std;
int main()
{
	int n1,n2,result;
	cout<<"number 1: "<<endl;
	cin>>n1;
	cout<<"number 2: "<<endl;
	cin>>n2;
	try{
		if(n2=0)
			throw n2;
		else
		{
			result = n1/n2;
			cout<<"the result is : %d"<<result<<endl;
		}

	}
	catch(int n2)
	{
		cout<<"\n cant divide"<<endl;
	}
	cout<<"End of the program"<<endl;
}
