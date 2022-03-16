#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream myfile;
	myfile.open("file.txt",ios::in);
	if(!myfile)
		cout<<"The file cannot open"<<endl;
	return 0;
}
