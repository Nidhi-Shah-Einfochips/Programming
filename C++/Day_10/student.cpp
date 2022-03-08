
#include<iostream>
using namespace std;
class student
{
	public:
	int roll_no;
	char name[20];
	void input()
	{
		cout<<"Enter the roll no"<<endl;
		cin>>roll_no;
		cout<<"Enter the name "<<endl;
		cin>>name;
	}
};
class test
{
	public:
	int marks[5];
	void get()
	{
		for (int i=0;i<5;i++)
		{
		cout<<"Enter the marks of" <<i<<" subjects"<<endl;
		cin>>marks[i];
		}
	}
};
class result : public student,public test
{
	public:
		int totalmarks=0;
		int percentage=0;
		void total()
		{
			for(int i=0;i<5;i++)
			{
				totalmarks=totalmarks+marks[i];
			}
			percentage=totalmarks/5;
		}
		void display()
		{
			cout<<"Roll_no "<<roll_no<<endl;
			cout<<"Name "<<name<<endl;
			cout<<"Total marks "<<totalmarks<<endl;
			cout<<"Percentage "<<percentage<<endl;
		}

};
int main()
{
	result r1;
	r1.input();
	r1.get();
	r1.total();
	r1.display();
	return 0;
}


