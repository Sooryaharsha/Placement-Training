#include<stdio.h>
int i,n,j,totcol;

void main()
{
	pattern21();
}

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

void pattern12()
{
	n=5;
	for(i=1;i<=2*n;i++)
	{
		totcol = i > n ? 2*n-i : i;
		for(j=1;j<=totcol;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pattern21()
{
	n=5;
	for(i=1;i<2*n;i++)
	{
		totcol = i > n ? i-n+1 : n+1-i;
		for(j=1;j<=totcol;j++)
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




