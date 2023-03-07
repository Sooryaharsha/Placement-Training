#include<stdio.h>

int i,j,n,space,totcol;

void main()
{
	pattern6();    //1,2,3,30,4,5,6
}

void pattern1()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(space=1;space<i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern2()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(space=i;space<n;space++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern20()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(space=i;space<n;space++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			if(j==1 || j==n || i==1 || i==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void pattern3()
{
	n=10;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


void pattern30()
{
	n=10;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(j==1 || j==n || i==1 || i==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}

void pattern4()
{
	n=5;
	for(i=1;i<=2*n;i++)
	{
		totcol = i>n?n*2-i:i;
		for(space=totcol;space<=n;space++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			if(i%2==0)
			{
				printf("- ");
			}
			else
			{
				printf("* ");
			}
			
		}
		printf("\n");
	}
}

void pattern5()
{
	n=10;
	for(i=1;i<=2*n;i++)
	{
		totcol= i>n? 2*n-i: i;
		for(space=totcol;space<=n;space++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			if(i%2==0)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}printf("\n");
	}
}

void pattern6()
{
	n=10;
	for(i=1;i<=n;i++)
	{	
	    totcol=n-i+1;
		for(space=totcol;space<=n;space++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			if(j==1 || j==totcol)
			{
				printf("* ");
			}
			else
			{
				printf("- ");
			}
			
		}
		printf("\n");
	}
}
