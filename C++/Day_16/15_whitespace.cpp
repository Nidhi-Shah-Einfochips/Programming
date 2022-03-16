#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	int count =0;
	string line;
	ifstream file("data.txt");
	while(getline(file,line))
	{
		for(int i=0;i<line.length();i++)
		{
			if(line[i]==' ' ||line[i]=='\t')
				count++;
		}
	}
	cout<<"Number of white space is "<<count<<endl;
	return 0;
}
