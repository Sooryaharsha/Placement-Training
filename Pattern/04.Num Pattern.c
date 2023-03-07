#include<stdio.h>
int i,n,j,totcol,s,totspace,k;

void main()
{
	pattern5();
}

void pattern1()
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

void pattern2()
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

void pattern3()
{
	n=5,j=1;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		  printf("%d ",j);	
		}
		printf("\n");
	}
}

void pattern4()
{
	n=4,k=0;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		  printf("%d ",++k);	
		}
		printf("\n");
	}
}

void pattern5()
{
	n=5,j=1;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		  printf("%d ",i);	
		}
		printf("\n");
	}
}


