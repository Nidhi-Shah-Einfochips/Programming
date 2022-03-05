//Library managment system
//BY NIDHI SHAH
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cont;
struct library
        {
                int acc_no;
                float price;
                char bookname[30];
                char authorname[20];
                int flag;
        }lib[100];

int main()
{
	printf("*********************************************\n");
	printf("         LIBRARY MANAGEMNT SYSTEM\n");
	printf("*********************************************\n");
	printf("\n");
	int choice;
	int cnt =0;
	int temp;
	char name1[20];
	char name2[20];

	while(choice!=7)
	{
		printf("-------------Menu--------------\n");
		printf("1.Add book information\n");
		printf("2.Display book information\n");
		printf("3.List all books of given author\n");
		printf("4.List the title of specified book\n");
		printf("5.List the count of books in library\n");
		printf("6.List the books in the order of accession number\n");
		printf("7.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Add book information\n");
				printf("Enter the accession no. of book\n");
				scanf("%d",&lib[cont].acc_no);
				printf("Enter the book name\n");
				gets(lib[cont].bookname,20,stdin);
				printf("Enter the author name \n");
				fgets(lib[cont].authorname,20,stdin);
				printf("Enter the price of book \n");
				scanf("%f",&lib[cont].price);
				printf("Book issued yes or not: \n");
				scanf("%d",&lib[cont].flag);
				cont++;
				break;
			case 2:
				printf("Display book information \n");
				for(int i=0;i<cont;i++)
				{
					printf("=======================\n");
					printf("Accession Number of book is: %d\n",lib[i].acc_no);
					printf("Title of book : %s\n",lib[i].bookname);
					printf("Name of author : %s\n",lib[i].authorname);
					printf("Price of book : %f\n",lib[i].price);
					printf("Book issued : %d\n",lib[i].flag);
				}
				break;
			case 3:
				cnt=0;
				printf("Enter the author name : \n");
				gets(name1,20,stdin);
				for(int i=0;i<cont;i++)
				{
					if(strcmp(name1,lib[i].authorname)==0)
							{
							cnt++;
							printf("=====================\n");
							printf("Accession Number of book is: %d\n",lib[i].acc_no);
                                       			printf("Title of book : %s\n",lib[i].bookname);
                                        		printf("Name of author : %s\n",lib[i].authorname);
                                        		printf("Price of book : %f\n",lib[i].price);
                                        		printf("Book issued : %d\n",lib[i].flag);
							}
				}
				if(cnt==0)
				{
				printf("Author not found\n");
				}
				break;
			case 4:
				cnt=0;
				printf("Enter the book name : \n");
                                fgets(name2,20,stdin);
                                for(int i=0;i<cont;i++)
                                {
                                        if(strcmp(name2,lib[i].bookname)==0)
                                        {

							cnt++;
                                                        printf("=====================\n");
                                                        printf("Accession Number of book is: %d\n",lib[i].acc_no);
                                                        printf("Title of book : %s\n",lib[i].bookname);
                                                        printf("Name of author : %s\n",lib[i].authorname);
                                                        printf("Price of book : %f\n",lib[i].price);
                                                        printf("Book issued : %d\n",lib[i].flag);
                                        }
                                }
                                if(cnt==0)
                                {
                                printf("book  not found\n");
                                }
				break;
							
			case 5:
				printf("Total number of books in library : %d\n",cont);
				break;
			case 6:
				for(int i=0;i<cont;i++)
				{
					for(int j=0;j<cont-1;j++)
					{
						if(lib[i].acc_no>lib[j+1].acc_no)
						{
							temp=lib[i].acc_no;
							lib[i].acc_no=lib[j+1].acc_no;
							lib[j+1].acc_no=temp;
						}
					}
				}
				for(int j=0;j<cont;j++)
				{
					 printf("=====================\n");
                                         printf("Accession Number of book is: %d\n",lib[j].acc_no);
                                         printf("Title of book : %s\n",lib[j].bookname);
                                         printf("Name of author : %s\n",lib[j].authorname);
                                         printf("Price of book : %f\n",lib[j].price);
                                         printf("Book issued : %d\n",lib[j].flag);
				}

				break;

			case 7:
				exit (0);
				break;
			default:
				printf("Invalid Entry \n");
				break;
		}

				

					


	}

	return 0;

}

