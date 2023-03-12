#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

int main()
{
	int i;
	struct node* head=NULL;
	for(i=0;i<5;i++)
	{
		insert(&head,i+1);
	}
	printf("\n\nImplementing Stack using Linked List : ");
	display(head);
	
}

void insert(struct node** head,int val)
{
	struct node* newnode;
	newnode =(struct node*)malloc(sizeof(struct node)) ;
	newnode->data=val;
	newnode->next=*head;
	*head=newnode;
	
}

void display(struct node *head)
{
	struct node* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n\n");
}





















