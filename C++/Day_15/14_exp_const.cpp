#include<iostream>
using namespace std;
class Divide
{
	private:
		int *x;
		int *y;
	public:
		Divide()
		{
			x=new int();
			y=new int();
			cout<<"Enter two numbers:";
			cin>>*x>>*y;
			try
			{
				if(*y==0)
				{
					throw *x;
				}
			}
			catch(int)
			{
				delete x;
				delete y;
				cout<<"Second number cannot be zero!"<<endl;
				throw;
			}

		}
		~Divide()
		{
			try
			{
				delete x;
				delete y;
			}
			catch(...)
			{
				cout<<"Error while deallocating memory"<<endl;
			}
			
		}
		float division()
                        {
                                return (float)*x / *y;
                        }

};
int main()
{
	try
	{
		Divide d;
		float res = d.division();
		cout<<"result of division is :"<<res;
	}
	catch(...)
	{
		cout<<"unknown excpetion!"<<endl;
	}
	return 0;
}

