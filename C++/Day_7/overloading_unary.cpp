//BY NIDHI SHAH
//OVERLOADING UNARY OPERATOR '-'
#include<iostream>
using namespace std;
class space
{
	int x,y,z;
	public:
	space()
	{
		x=y=z=0;
	}
	space(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void display()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
	void operator -()
	{
		x=-x;
		y=-y;
		z=-z;
	}
	void operator --()
        {
		cout<<"Predecrement"<<endl;
                --x;
                --y;
                --z;
        }
	void operator --(int)
        {
                cout<<"Postdecrement"<<endl;
                x--;
                y--;
                z--;
        }
	void operator ++()
        {
                cout<<"Preincrement"<<endl;
                ++x;
                ++y;
                ++z;
        }
        space operator ++(int)
        {
                cout<<"Postincrement"<<endl;
		space temp;
                temp.x=x++;
                temp.y=y++;
                temp.z=z++;
		return temp;
        }


};
int main()
{
	cout<<"OVERLOADING THE UNARY OPRATOR -"<<endl;
	space s1(5,4,3);
	s1.display();
	--s1;
	s1.display();
	s1--;
	s1.display();
	++s1;
        s1.display();
	space d;
        d=s1++;
        d.display();

	return 0;
}


