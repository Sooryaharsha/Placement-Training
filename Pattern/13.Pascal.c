//pascal triangle

#include<stdio.h>

int i,j,n,k,totcol,totspace,s,pr;

void main()
{
	n=6;
	for(i=0;i<n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			{
				pr=1;
			}
			else
			{
				pr=pr*(i-j+1)/j;
			}
			printf("%d ",pr);
		}
		printf("\n");
	}
}
