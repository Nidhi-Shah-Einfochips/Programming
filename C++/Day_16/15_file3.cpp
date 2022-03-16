#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream fin;
	string str,str2;
	fin.open("data.txt");
	int count =0;
	char word[30];
	if(!fin)
	{
		cout<<"file did not open"<<endl;
	}
	else
	{
	/*	while(!input.eof())
		{
			input>>str>>str2;
			cout<<str<<'\t'<<str2<<endl;
		}
		*/
	/*	while(!fin.eof())
		{
			fin>>word;
		//	cout<<word<<endl;
			count++;
		}*/
		while(getline(fin,str))
                                {
                                count++;
                                }

		cout<<"Total lines"<<count<<endl;
	}
}
