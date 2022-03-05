//Generate binary no. 1 to n using a queue
//BY NIDHI SHAH
#include<stdio.h>
#include<string.h>
char queue[20][20], temp[20];
int front = 0, rear = 0;
void enqueue(char *ptr)
{
	if(rear == 20)
	{
		return;
	}
	if(front == 0 && rear == 0)
		front = rear = 1;
	else
		rear = rear + 1;
		strcpy(queue[rear],ptr);
}
char* dequeue()
{
	if(front == 0)
	printf("\nEmpty Queue");
	else
	{
		strcpy(temp,queue[front]);
	if(front == rear)
		front = rear = 0;
	else
		front = front + 1;
	return temp;
	}
}
void binary_numbers_using_queue()
{
	char temp2[20];
	strcpy(temp,dequeue());
	printf("%s ",temp);
	strcpy(temp2,temp);
	strcat(temp,"0");
	enqueue(temp);
	strcat(temp2,"1");
	enqueue(temp2);
}

int main()
{
	int i,n;
	printf("\nEnter the end value : ");
	scanf("%d",&n);
	char temp[2] = "1";
	enqueue(temp);
	printf("\n-------------Binary numbers from 1 to %d--------------------\n",n);
	for(i = 1; i <= n; i++)
	{
		 binary_numbers_using_queue();
	}
	printf("\n");

	return 0;
}


