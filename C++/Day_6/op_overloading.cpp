// by NIDHI SHAH
// THIS CODE IS FOR OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class complex
{
	int real, imag;
	public:
	complex() // Default constructor
	{
		real = 0;
		imag = 0;
	}
	complex(int x, int y) // parameterized constructor
	{
		real = x;
		imag = y;
	}
	void display()
	{
		cout<<"The values for real part: "<<real<<" and imag part: "<<imag<<endl;
	}
	// overloading the '+' operator here
/*	complex operator + (complex ob)
	{
		complex temp;
		temp.real = real + ob.real;
		temp.imag = imag +ob.imag;
		return temp;
	}// end of overloading function
*/
	friend complex operator +(complex ob1,complex ob2); //friend function 
	complex operator - (complex ob)
        {
		cout<<"SUBTRACTION"<<endl;
                complex temp;
                temp.real = real - ob.real;
                temp.imag = imag - ob.imag;
                return temp;
        }// end of overloading function

	complex operator * (complex ob)
        {
		cout<<"MULTIPLICATION"<<endl;
                complex temp;
                temp.real = real * ob.real;
                temp.imag = imag * ob.imag;
                return temp;
        }// end of overloading function

	complex operator / (complex ob)
        {
		cout<<"DIVISION"<<endl;
                complex temp;
                temp.real = real / ob.real;
                temp.imag = imag / ob.imag;
                return temp;
        }// end of overloading function
/*	
	 complex operator = (complex ob)
        {
                cout<<"ASSIGNMENT OPERATOR"<<endl;
                complex temp;
                temp.real = ob.real;
                temp.imag = ob.imag;
                return temp;
        }// end of overloading function
	
*/	  complex operator % (complex ob)
        {
                cout<<"MODULO"<<endl;
                complex temp;
                temp.real = real % ob.real;
                temp.imag = imag % ob.imag;
                return temp;
        }// end of overloading function

	 complex operator += (complex ob)
        {
                cout<<"+="<<endl;
                complex temp;
                temp.real += real / ob.real;
                temp.imag  += imag / ob.imag;
                return temp;
        }// end of overloading function

	  complex operator -= (complex ob)
        {
                cout<<"SUBTRACTION EQUAL"<<endl;
                complex temp;
                temp.real = real -= ob.real;
                temp.imag = imag -= ob.imag;
                return temp;
        }// end of overloading function

	 complex operator /= (complex ob)
        {
                cout<<"DIVIDE EQUAL"<<endl;
                complex temp;
                temp.real = real /= ob.real;
                temp.imag = imag /= ob.imag;
                return temp;
        }// end of overloading function
	
	  bool operator != (const complex ob)
        {
                cout<<"NOT EQUAL TO"<<endl;
                if(real!=ob.real||imag!=ob.imag)
		{
			
			return true;
		}
		else
		{
			
			return false;
		}
	
        }// end of overloading function


};// enf of class
complex operator + (complex ob1,complex ob2) // friend function operator overloading
        {
		cout<<"ADDITION"<<endl;
                complex temp;
                temp.real = ob1.real + ob2.real;
                temp.imag = ob1.imag +ob2.imag;
                return temp;
        }// end of overloading function

int main()
{
	complex c1(20,40),c2(5,10);
	complex c3;
	c1.display();
	c2.display();
	c3.display();
	cout<<"OPERATOR OVERLOADING"<<endl;
	c3=c1+c2;
//	c3=c1.operator +(c2);
	c3.display();
	c3=c1.operator -(c2);
        c3.display();
	c3=c1.operator -=(c2);
	c3.display();
	c3=c1.operator /=(c2);
	c3.display();
	c3=c1.operator *(c2);
        c3.display();
	c3=c1.operator /(c2);
        c3.display();
	c3=c1.operator +=(c2);
	c3.display();
	c3=c1.operator %(c2);
	c3.display();
	c3=c1.operator !=(c2);
	c3.display();


	return 0;
}
	
