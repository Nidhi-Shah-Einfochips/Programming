#include<iostream>
using namespace std;
int main()
{
	int a=1;
	try
	
	{
		try
		{

		if(a==1)
			throw a;
		}
		catch(int a)
			 {
                cout<<"value a"<<endl;
		throw 'A';
        }

		 if(a==2)
			throw 'A';
		else if(a==3)
			throw 4.5;
	}
	
	catch(char A)
	{
		cout<<"A is printing"<<endl;
	}
	catch(double d)
	{
		cout<<"float type"<<endl;
	}
	return 0;
}
