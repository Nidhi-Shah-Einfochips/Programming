#include<iostream>
using namespace std;
class student
{
	int marks;
	char name[20];
	public:
	int rollno;
	int getdata()
	{
		cout<<"Enter the name of student"<<endl;
		cin>>name;
		cout<<"Enter the roll no of student"<<endl;
		cin>>rollno;
		cout<<"enter the marks of student"<<endl;
		cin>>marks;
	}
	int printdata()
	{
		cout<<"ROLL NO : "<<rollno<<endl;
		cout<<"NAME : "<<name<<endl;
		cout<<"MARKS : "<<marks<<endl;
	}
};
int main()
{
	student s1[3];
	student *ptr=s1;
	for(int i=0;i<3;i++)
	{
		ptr->getdata();
		ptr->printdata();
		ptr++;
	}
	return 0;
}
