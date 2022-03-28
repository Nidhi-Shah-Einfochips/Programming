#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("data.txt");
	outfile<<"this is my file ";
	long pos = outfile.tellp();
	outfile.seekp(pos+6);
	outfile<<"Again my file";
	outfile.close();
	cout<<"Done!!";
	return 0;
}
