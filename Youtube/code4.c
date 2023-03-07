#include<stdio.h>

int i,a[10],count=0,n;

void main()
{
  	printf("Enter the array size : ");
	scanf("%d",&n);
	printf("\n Enter those elements : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==2)
		{
			if(a[i+1]==1)
			{
				count++;
			}
		}
	}
	printf("\n\nNo. Of goals after penalty : %d",count);
}
