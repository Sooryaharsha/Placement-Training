#include<stdio.h>

int i,n,j,k,s,totcol,totspace,c=1;

void main()
{
	trial();
}

void pattern1()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=0;j<n && i%2==0;j++)
		{
			printf("%d ",c++);
		}
		
		for(j=0; j<n && i%2==1;j++)
		{
			printf("%d ",--c );
		}
		c=c+n;
		printf("\n");
	}
}

void pattern2()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int rstart,cstart,rend,cend;
	rstart=0;
	cstart=0;
	rend=3-1;
	cend=3-1;
	while(rstart<=rend && cstart<=cend)
	{
		for(i=cstart;i<=cend;i++)
		{
			printf("%d ",a[rstart][i]);
		}
		rstart++;
		for(j=rstart;j<=rend;j++)
		{
			printf("%d ",a[j][cend]);
		}
		cend--;
		if(rstart<=rend)
		{
			for(i=cend;i>=cstart;i--)
			{
				printf("%d ",a[rend][i]);
			}	
		}
		rend--;
		if(cstart<=cend)
		{
			for(i=rend;i>=rstart;i--)
			{
				printf("%d ",a[i][cstart]);
			}
		
		}
		cstart++;		
	}	
}

void trial()
{
	int x,y;
	x=100;
	y=100;
	printf("X Value is : ");
	for(i=0;i<3;i++)
	{
		printf("%d ",x+2);
	}
	printf("Y Value is : ");
	for(i=0;i<3;i++)
	{
		printf("%d ",y++);
	}
}

































