#include<stdio.h>
#include<math.h>
#include<string.h>

int a[10],i,n,k,j,count=0,flag=0,b[10],s,x=0;

void main()
{
	printf("Enter the array size : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element : ");
		scanf("%d",&a[i]);
	}
	printf("Enter the k value : ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
        count=1;
		for(j=i+1;j<n;j++)
		{
			
			if(a[i]==a[j])
			{
				count++;	
			    if(count==k)
			     {
				   flag=j-1;
			     }
	   }
	
