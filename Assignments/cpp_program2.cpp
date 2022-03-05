//matrix adding and multiplication program
//BY NIDHI SHAH
#include<iostream>
using namespace std;
class Matrix
{
	public:
	int a[10][10];
	int m,n,i,j;
	Matrix()
	{
		m=0;
		n=0;
	}
	void getrows_cols()
	{
		cout<<"Enter the no. of rows and columns : ";
		cin>>m>>n;
	}
	void setElements()
	{
		cout<<"Enter the elements of the matrix:"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<"------------matrix-------"<<endl;
		for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                cout<<a[i][j]<<" ";
                        }
			cout<<endl;
                }


	}
	void addition(Matrix m1,Matrix m2)
	{
		cout<<"Sum of two matrices"<<endl;
		Matrix m3;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				m3.a[i][j]=m1.a[i][j]+m2.a[i][j];
			}
		}
		cout<<"------------------additition--------------"<<endl;
		for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                cout<<m3.a[i][j]<<" ";
                        }
			cout<<endl;
                }
		
	}
	void multiply (Matrix m1,Matrix m2)
	{
		cout<<"multiply of two matrices"<<endl;
		Matrix m4;
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                m4.a[i][j]=m1.a[i][j]*m2.a[i][j];
                        }
                }
		cout<<"-------------multiplication------------"<<endl;
		for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                cout<<m4.a[i][j]<<" ";
                        }
                        cout<<endl;
                }

	}

};
int main()
{
	Matrix m1,m2;
	Matrix();
	m1.getrows_cols();
	m1.setElements();
	m2.getrows_cols();
	m2.setElements();
	m1.addition(m1,m2);
	m1.multiply(m1,m2);
	return 0;
}
	


