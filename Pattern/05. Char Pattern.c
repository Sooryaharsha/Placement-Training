#include<stdio.h>

int i,j,totspace,totcol,n,s;

void main()
{
	pattern3();
}

void pattern1()
{
	n=20;
	for(i=1;i<=n;i++)
	{
		totspace=n-i;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c ",64+j);
		}
		printf("\n");
	}
}

void pattern2()
{
	n=5;
	for(i=1;i<2*n;i++)
	{
		totcol = i>n? 2*n-i : i ;
		totspace=n-totcol;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			printf("%c",65+i);
		}
		printf("\n");
	}
}

void pattern3()
{
	n=20;
	for(i=0;i<=n;i++)
	{
		totcol=i;
		totspace=n-totcol;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			if(j==1 || j==i || i==n)
			{
				printf("%c ",65);
			}
			else
			{
				printf("  ");
			}
		}printf("\n");
	}
}
