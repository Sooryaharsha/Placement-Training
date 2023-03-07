//01

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
	x=0;
	for(i=0;i<n;i++)
	{
        count=1;
		flag=0;
		for(j=i+1;j<n;j++)
		{
			
			flag++;
			if(a[i]==a[j])
			{
				count++;	
			}

		}
		printf("\n\n%d %d",flag,count);
			if(count==k)
			{
				b[x]=a[i];
				b[++x]=flag;
				printf("\n\n%d %d",b[x],b[x+1]);
			}
		
	}
	s= sizeof(b)/sizeof(b[0]);
	printf("\nThe size of b is %d",s);
	for(i=1;i<s;i+=2)
	{
		if(b[i]<b[i+2])
		{
			printf("The required no. is : ",b[i-1]);
		}
		else
		{
			printf("The required no. is : ",b[j-1]);
		}
		
	}
	
}
