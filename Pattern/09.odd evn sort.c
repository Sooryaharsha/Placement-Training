/*Eg 1: Input: 13,2 4,15,12,10,5
        Output: 13,2,12,10,5,15,4
Eg 2: Input: 1,2,3,4,5,6,7,8,9
        Output: 9,2,7,4,5,6,3,8,1 */
        
#include<stdio.h>

int a[]={13,2,4,15,12,10,5};
int i,j,l,n,temp;

void main()
{
	
	n=sizeof(a)/sizeof(a[10]);
	printf("\nNo of elements in the array is %d ",n);
	display();
    for(i=0;i<n/2;i++)
    {
	for(j=0;j<n-2;j++)
	{
		if(j%2==0)
		{
			printf("\nEntered into even index");
			if(a[j]<a[j+2])
			{
				temp=a[j];
				a[j]=a[j+2];
				a[j+2]=temp;
			}
		}
		else
		{
			printf("\nEntered into odd index");
			if(a[j]>a[j+2]) 
			{
				temp=a[j];
				a[j]=a[j+2];
				a[j+2]=temp;
			}
		}
	}
}
	display();
}


void display()
{
	printf("\n\nThe array values are : ");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
