#include<stdio.h>
#include<stdlib.h>

int i,j,k,n,mid,s;

void main()
{
	printf("\nEnter the N value : ");
	scanf("%d",&n);
	k=0;
	
	for(i=1;i<=n;i++)
	{
		k=i==1?1:k+n;
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=n;j++)
		{
			printf("%d ",k);
			k=i%2==0?--k:++k;
		}
		
		printf("\n");
	}
}
