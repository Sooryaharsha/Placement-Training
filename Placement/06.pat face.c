#include<stdio.h>

//c2=upper - count 
//upper =n(n+1)

void main()
{
	int i,n=3,j,s,p=1,k=n*(n+1),totcol,q;
	for(i=1;i<=n;i++)
	{
		for(s=1;s<i;s++)
		{
			printf(" ");
		}
		//totcol=2*(n-i+1);
		for(j=1;j<=n-i+1;j++)
		{
			
			printf("%d ",p++);
		}
		q=k-p;
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d ",q+2);
			q++;
		}
		printf("\n");
	}
}
