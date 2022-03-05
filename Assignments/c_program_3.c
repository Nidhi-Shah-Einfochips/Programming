//search and sequence in array
//BY NIDHI SHAH
#include<stdio.h>
int main()
{
	int num;
	int arr[10]={1,5,4,8,9,2,0,6,11,7};
	int count=0;
	printf("***************\n");
	printf("Search the number\n");
	printf("***************\n");
	printf("ENTER THE NUMBER TO SEARCH : \n");
	scanf("%d",&num);
	for(int i=0;i<10;i++)
	{
		if(num==arr[i])
		{
			count=1;
		}
	}
	if(count==1)
	{
		printf("\nYES\n");
	}
	else
	{
		printf("\nNO\n");
	}
	printf("***************\n");
        printf("Print the sequence\n");
        printf("***************\n");

	for(int i=0;i<10;i++)
        {
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
