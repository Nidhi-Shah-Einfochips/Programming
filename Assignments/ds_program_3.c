#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

void specificorder(struct node *root)
{
	if(root==NULL)
	{
		printf("Empty");
		return;
	}
	printf("%d ",root->data);
	if(root->left!=NULL)
	{
		printf("%d ",root->left->data);
		printf("%d ",root->right->data);
	}
	if(root->left->left!=NULL)
	{
		printf("%d ",root->left->left->data);
		printf("%d ",root->right->right->data);
		printf("%d ",root->left->right->data);
		printf("%d ",root->right->left->data);
	}
	if(root->left->left->left!=NULL)
	{
		printf("%d ",root->left->left->left->data);
		printf("%d ",root->right->right->right->data);
		printf("%d ",root->left->left->right->data);
		printf("%d ",root->right->right->left->data);
		printf("%d ",root->left->right->left->data);
		printf("%d ",root->right->left->right->data);
		printf("%d ",root->left->right->right->data);
		printf("%d ",root->right->left->left->data);
	}
	if(root->left->left->left->left==NULL)
	{
		return;
	}
}

void specificorder1(struct node *root)
{
	if(root->left->left->left!=NULL)
	{
		printf("%d ",root->left->left->left->data);
		printf("%d ",root->right->right->right->data);
		printf("%d ",root->left->left->right->data);
		printf("%d ",root->right->right->left->data);
		printf("%d ",root->left->right->left->data);
		printf("%d ",root->right->left->right->data);
		printf("%d ",root->left->right->right->data);
		printf("%d ",root->right->left->left->data);
	}
	if(root->left->left!=NULL)
	{
		printf("%d ",root->left->left->data);
		printf("%d ",root->right->right->data);
		printf("%d ",root->left->right->data);
		printf("%d ",root->right->left->data);
	}
	if(root->left!=NULL)
	{
		printf("%d ",root->left->data);
		printf("%d ",root->right->data);
	}
	printf("%d ",root->data);	
} 


// Creating a new node
struct node *newnode(int data)
{
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return (node);
}



int main() {
  struct node *root = NULL;
  root = newnode(1);
  root->left = newnode(2);
  root->right = newnode(3);
  root->left->left = newnode(4);
  root->left->right = newnode(5);
  root->right->left = newnode(6);
  root->right->right= newnode(7);
  root->left->left->left = newnode(8);
  root->left->left->right = newnode(9);
  root->left->right->left = newnode(10);
  root->left->right->right = newnode(11);
  root->right->left->left = newnode(12);
  root->right->left->right = newnode(13);
  root->right->right->left = newnode(14);
  root->right->right->right = newnode(15);
  printf("---------------------------top down-----------------------------\n");
	printf("\n");
	specificorder(root);
	printf("\n");
	printf("\n");
	printf("----------------------------bottom up-----------------------\n");
	printf("\n");
	specificorder1(root);
	printf("\n");
  return 0;




  
}
