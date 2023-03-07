#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i,j,k,totcol,totspace,front,rear,a[100][100],n;

void main()
{
	zoho();
}

void zoho()
{
	n=5;
	front=1;
	rear=2*n-1;
	while(n)
	{
		for(i=front;i<=rear;i++)
		{
			for(j=front;j<=rear;j++)
			{
				if(i==front||j==rear||j==front||i==rear)
				   a[i][j]=n;
			}
		}
		front++;
		rear--;
		n--;
	}
	n=5;
	for(i=1;i<2*n;i++)
		{
			for(j=1;j<2*n;j++)
			{
				printf("%d ",a[i][j]);
		    }printf("\n");
	    }	
}
