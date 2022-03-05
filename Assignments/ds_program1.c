//in place merge two sorted arrays
//BY NIDHI SHAH
#include<stdio.h>
int main()
{
	int X[]={1,4,7,8,10};
	int Y[]={2,3,9};
	int m =5;
	int n= 3;
	for(int i=n-1;i>=0;i--)
	{
		int j,last =X[m-1];
		for(j=m-1;j>=0&&X[j]>Y[i];j--)
		{
			X[j+1]=X[j];
		}
		if(j!=m-1)
		{
			X[j+1]=Y[i];
			Y[i]=last;
		}
	}
	printf("X : ");

	for(int i=0;i<m;i++)
	{
		printf("%d ",X[i]);
	}
	printf("\n");
	printf("Y : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",Y[i]);
	}
	printf("\n");
	return 0;
}

