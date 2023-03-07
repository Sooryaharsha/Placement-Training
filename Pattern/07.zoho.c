#include<stdio.h>

int n,i,j,mid;

void main()
{
	printf("Enter the n value (only odd nos) : ");
	scanf("%d",&n);
	mid=(n+1)/2;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
			if(i==j)
			{
				if(i<=mid)
				   printf("%d",n+1-i);
				else
				   printf("%d",i);
			}
			else if(i+j==n+1)
			{
				if(i<mid)
				   printf("%d",i);
				else
				   printf("%d",j);
			}
			else
			{
				printf("  ");
			}
        }printf("\n");
}
}
