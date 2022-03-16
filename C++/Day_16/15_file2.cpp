#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream input;
	string str;
	input.open("data.txt");
	if(!input)
	{
		cout<<"file does not exist"<<endl;
	}
	else
	{
		while(getline(input,str))
				{
				cout<<str<<endl;
				}
		/*while(!input.eof())
		{
			input>>str;
			cout<<str<<" ";
		}*/
	}
}
