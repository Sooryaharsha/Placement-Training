#include<stdio.h>

int a[]={4,0,1,1,1,1};
int i,s,suml,sum,n;

void main()
{
	s= sizeof(a)/sizeof(a[0]);
	printf("\nSize of the array is : %d",s);
	for(i=0;i<s;i++)
	{
		printf("\n%d",a[i]);
	}
	for(i=0;i<s;i++)
	{
	  sum=sum+a[i];
   }
   suml=0;
	
	for(i=0;i<s;i++)
    {
    	sum=sum-a[i];
    	if(sum==suml)
    	{
    		printf("\n\nEquilibirium no. is %d",a[i]);
		}
		else
		{
			suml=suml+a[i];
		}

	}
}
