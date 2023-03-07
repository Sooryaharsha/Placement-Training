#include<stdio.h>

int n,sum,start,end,i,j,temp;
int a[]={1,4,5,2,3,4,6,7,0};

void main()
{
	n=sizeof(a)/sizeof(a[0]);
	sort();
    display();
	start=0;
	end=n-1;
	sum=8;
	while(start<end)
	{
		if(a[start] + a[end]==sum)
		{
			printf("\nElements = %d %d ",a[start],a[end]);
			start++;
		}
		else if(a[start] + a[end] > sum)
		{
		    end--;
		}
		else 
		{
			start++;
		}
	
	}
	
}

void display()
{
	printf("Array values are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void sort()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
