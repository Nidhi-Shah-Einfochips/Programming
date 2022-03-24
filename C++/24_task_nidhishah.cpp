#include <bits/stdc++.h>
#include<iostream>
#include<deque>
using namespace std;
void printSubset(int arr[], int n, int k)
{
	static int i;
	static int j;
	for(i=0;i<n-2;i++)
	{
		for(j=i;j<k;j++)
		{
		cout<<arr[j]<<" ";
		}
		k=k+1;
		cout<<endl;
	}
	cout<<endl; 
}

void printKMax(int arr[], int n, int k)
{
	std::deque<int> Qi(k);
 	int i;
 	for (i = 0; i < k; ++i)
    	{
    		while ((!Qi.empty()) && arr[i] >=
                            arr[Qi.back()])
           
             
          Qi.pop_back();
		 
        
        Qi.push_back(i);
        
    }
 
    
    for (; i < n; ++i)
    {
     
      
        cout << arr[Qi.front()] << " ";
 
        
        while ((!Qi.empty()) && Qi.front() <=
                                           i - k)
           
            
            Qi.pop_front();
 
        
        while ((!Qi.empty()) && arr[i] >=
                             arr[Qi.back()])
            Qi.pop_back();
 
       
        Qi.push_back(i);
    }
 
    
    cout << arr[Qi.front()];
}
 void printKMin(int arr[], int n, int k)
{
   
    std::deque<int> Qi(k);
 
   
    int i;
    for (i = 0; i < k; ++i)
    {
     
        
        while ((!Qi.empty()) && arr[i] <=
                            arr[Qi.back()])
           
             
           Qi.pop_back();
 
        
        Qi.push_back(i);
    }
 
    
    for (; i < n; ++i)
    {
     
      
        cout << arr[Qi.front()] << " ";
 
        
        while ((!Qi.empty()) && Qi.front() <=
                                           i - k)
           
            
            Qi.pop_front();
 
        
        while ((!Qi.empty()) && arr[i] <=
                             arr[Qi.back()])
            Qi.pop_back();
 
       
        Qi.push_back(i);
    }
 
    
    cout << arr[Qi.front()];
}
 

int main()
{
int k,n;
	cout<<"Enter thr size of queue"<<endl;
	cin>>n;
	cout<<"Enter the size of subset"<<endl;
	cin>>k;
    int arr[n] ;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"Elements"<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    	}
    	cout<<endl;
   
    cout<<"printing the subset"<<endl;
    int data[k];
    printSubset(arr,n,k);
    cout<<endl;
    cout<<"max of the subset"<<endl;
    printKMax(arr, n, k);
    cout<<endl;
    cout<<"min of the subset"<<endl;
    printKMin(arr,n,k);
    cout<<endl;
    return 0;
}
