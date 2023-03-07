#include<stdio.h>

int a[]={1,4,3};
int i,n,s,sum=0,summ=0;

void main()
{
	s= sizeof(a)/sizeof(a[0]);
	printf("\nEnter the n value : ");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("\n\n%d",sum);
    for(i=0;i<n-1;i++)
    {
    	summ=summ+a[i];
	}
	printf("\n\n%d",summ);
	if(sum!=summ)
	{
		printf("\n\nThe missing element is %d",sum-summ);
	}

	
}
