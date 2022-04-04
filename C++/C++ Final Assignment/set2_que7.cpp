//NIDHI SHAH SET 2 QUESTION 7
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int Cutsquares(int,int);
int gcd(int,int);

int main()
{
	int b, l;
	cout<<"Enter breadth : "<<endl;
	cin>>b;
	cout<<"Enter length : "<<endl;
	cin>>l;
	cout <<"Answer = "<< Cutsquares(b, l)<<endl;
	return 0;
}
int Cutsquares(int x, int y)
{
	int s,ans;
	s = gcd(x, y);
	ans = (x * y) / (s * s);
	return ans;
}

int gcd(int a, int b)
{

	while(a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
