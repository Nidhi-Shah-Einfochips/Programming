//NIDHI SHAH SET 2 QUESTION 3
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string bstr,tstr;
int size,i,j,count=0,k;
void input_string(int size)	
{
	for(i=0;i<size;i++)
	{
		if(i+2>size)
			break;
		if(bstr.at(i)=='0' && bstr.at(i+1)=='1')
			count++;
	}
	tstr=bstr;	
}

void swap_func()
{
	int k;	
	for(i=0;i<size;i++)
	{   
		bstr=tstr;	
		for(j=i+2;j<size;j=j+2)
		{
		    k=0;
		    char x=bstr[i];
		    bstr[i]=bstr[j];
		    bstr[j]=x;
		    for(i=0;i<size;i++)
		    {  
		        if(i+2>size)
		            break;
		        if(bstr.at(i)=='0' && bstr.at(i+1)=='1')
		            k++;
		    }
		    
		    if(k>count)
		        count=k;
		}
	 }
}

int main()
{
    cout << "Enter the string:";
    cin >> bstr;
    size=bstr.length();	
    
    input_string(size);
    swap_func();
    cout <<"final Ocurance : " << count << endl;
    return 0;
}
