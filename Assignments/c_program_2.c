// Write a function that recevies marks receive by a studwnt in 3 subjects and returns the total and percentage of thes marks. Call this function from main() and print the results in main().
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int marks(int a,int b,int c,float *t,float *per)
{
	*t = a + b + c;
	*per=*t*100/300;
	return *per,*t;
}
int main()
{
	int subject_1,subject_2,subject_3;
	float total=0;
	float percentage=0;
	printf("*****************");
	printf("\nCalculate total and percentage of 3 subjects\n");
	printf("*****************");
	printf("\nEnter the marks of subject 1: ");
        scanf("%d",&subject_1);
        printf("\nEnter the marks of subject 2: ");
        scanf("%d",&subject_2);
        printf("\nEnter the marks of subject 3: ");
        scanf("%d",&subject_3);
	marks(subject_1,subject_2,subject_3, &total,&percentage);
	printf("\nTHE TOTAL MARKS RECEVIED ARE  : %.0f ", total);
        printf("\nTHE PERCENTAGE REVIDED BY STUDENT IS : %.2f\n",percentage);
	return 0;
}
