#include<iostream>
#include<fstream>
#include<string>
#include<cstring>

using namespace std;
int main()
{
  fstream fin("program1_file.txt");
  int count = 0;
  char ch[20];
  char c[5]="the";
  char c1[5]="The";
  while(fin)
    {
      fin>>ch;
      if(strcmp(ch,c)==0||strcmp(ch,c1)==0)
      {
	      count++;
      }
    }

  cout << count << endl;
	fin.close();  

  return 0;
}

