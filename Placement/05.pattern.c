#include<stdio.h>

int i,j,c,a,n=9,s,totcol,totspace;

int main()
{
	p2();

}

void p1()
{
	for( i=1;i<=n;i++)
	{
		 c=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",c);
			 a=n-j;
			c=c+a;
		}
		printf("\n");
	}
	return 0;
}

void p2()
{
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf("*");
		}
		for(s=0;s<2*i;s++)
		{
			printf(" ");
		}
		for(j=i;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}





























	
	
	
	
	
	

