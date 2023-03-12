#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node* next;
	
};

struct node* head=NULL;

void main()
{
	int a,i;
	while(1)
	{
		scanf("%d",&a);
		if(a<0)
			break;
		insert(a);
	}
	display();
}

void insert(int val)
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=head;
	head=newnode;
}

void display()
{
	struct node* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}


















