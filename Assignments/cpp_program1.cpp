// Employeee salary
// BY NIDHI SHAH
#include<iostream>
using namespace std;
class Employee
{
	public:
		int sal;
		int hrs;
		void getInfo(int salary,int h)
		{
			sal=salary;
			hrs=h;
		}
		void AddSal()
		{
			if(sal<500)
			{
				sal=sal + 10;
			}
		}
		void AddWork()
		{
			if(hrs>6)
			{
				sal=sal+5;
			}
		}
		void display()
		{
			cout<<"The total Salary is : "<<sal<<endl;
		}
};
int main()
{
	int salary, hours;
	cout<<"Enter the salary and hours of work per day\n";
	cin>>salary>>hours;
	Employee E1;
	E1.getInfo(salary,hours);
	E1.AddSal();
	E1.AddWork();
	E1.display();
	return 0;
}


		

