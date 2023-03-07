#include<stdio.h>
int i,n,j;

void pattern1()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pattern2()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pattern3()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pattern4()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}

void pattern5()
{
	int k=1;
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
	
}


void main()
{
	pattern5();
}
