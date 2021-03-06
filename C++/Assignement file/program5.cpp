#include<iostream>
#include<fstream>
#include<exception>

using namespace std;

class student
{
	public:
	int id;
	char name[20], branch[20], location[100];

	void getdata()
	{
		cout << "Enter id, name, branch, location" << endl;
		cin >> id;
		char t1 = getchar();
		cin.getline(name, 20);
		cin.getline(branch,20);
		cin.getline(location, 100);
	}

	void getStudentDetails()
	{
		fstream fin;
		student su;

		try
		{
			fin.open("student.txt", ios::app|ios::binary);
			if(!fin)
			{
				throw 'e';
			}
		}
		catch(char c)
		{
			cout << "Exception: File is not created" << endl;
		}
	
		su.getdata();
		fin.write((char *) &su, sizeof(su));
		fin.close();
	}

	// function to find the student from its id
	void findStudent()
	{
		int id_no, count=0;
		fstream fin;
		student su;

		cout << "Enter the student id" << endl;
		cin >> id_no;
		try
		{
			fin.open("student.txt", ios::in|ios::binary);
			if(!fin)
			{
				throw 'e';
			}
		}
		catch(char c)
		{
			cout << "Exception: File is not created" << endl;
		}

		while(!fin.eof())
		{
			fin.read((char *) &su, sizeof(su));
			count++;
		}

		fin.close();

		fin.open("student.txt", ios::in|ios::binary);

		for(int i=0; i<count-1; i++)
		{
			fin.read((char *) &su, sizeof(su));

			if(id_no == su.id)
			{
				cout << "Id number: " << su.id << endl;
				cout << "Name: " << su.name << endl;
				cout << "Branch: " << su.branch << endl;
				cout << "Location: " << su.location << endl;

				break;
			}
			else
			{
				try
				{
					if(i == count-2)
					{
						throw id_no;
					}
					else
					{
						continue;
					}
				}
				catch(int n)
				{
					cout << "EXCEPTION: id not found" << endl;
				}
			}
		}
	}

	// function to display student details
	void display()
	{
		fstream f;
		student su;
		int count=0;

		f.open("student.txt", ios::in|ios::binary);

		while(!f.eof())
		{
			f.read((char *) &su, sizeof(su));
			count++;
		}
		f.close();

		f.open("student.txt", ios::in|ios::binary);
		// using counter printing student details
		for(int i=0; i<count-1; i++)
		{
			f.read((char *) &su, sizeof(su));

			cout << "Id no: " << su.id << endl << "name: " << su.name << endl;
			cout << "Branch name: " << su.branch << endl << "Location: " << su.location << endl;
		}

		f.close();
	} //end display

};

int main()
{
	student s1;
	int choice=1;
	fstream fin;

	while(choice != 0)
	{
		// menu driven program to enter student details and find student by their id
		cout << "\nEnter your choice" << endl << "1: enter student detail" << endl << "2: find student" << endl << "3: Display Student Details " << endl;
		cout <<"4: Exit" << endl;
		cin >> choice;
		cout << endl;

		switch(choice)
		{
			case 1:
				s1.getStudentDetails();
				break;
			case 2:
				s1.findStudent();
				break;
			case 3:
				s1.display();
				break;
			case 4:
				choice = 0;
				break;
			default:
				cout << "Input is not valid" << endl;
		}
	}

	return 0;
}
