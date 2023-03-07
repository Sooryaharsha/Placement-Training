//REMOVING OUTER MOST PARANTHESE

#include<stdio.h>
#include<string.h>

char paran[10],stack[10];
int top=-1,i,n;

void main()
{
	printf("Enter the parantheseis  : ");
	scanf("%s",paran);
	n=strlen(paran);
	for(i=0;i<n;i++)
	{
		push(paran[i]);
	}
	printf("\n\n");
	display();
	
	
}

void push(char elem)
{
	if(top==-1)
	{
		stack[++top]=elem;
	}
	else 
	{
		if(stack[top]==elem)
		{
			pop();
			push(elem);
		}
		else
		{
			stack[++top]=elem;
		}
	}
}

void pop()
{
	printf("\nDeleted : %c",stack[top]);
	top--;
}

void display()
{
  printf("%s",stack);
}
