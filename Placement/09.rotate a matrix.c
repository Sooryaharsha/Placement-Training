//Rotate a matrix

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,n=3;
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nThe right rotation of the given matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	printf("\n\nThe left rotation of the given matrix is \n");
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
	
	
	
}


















