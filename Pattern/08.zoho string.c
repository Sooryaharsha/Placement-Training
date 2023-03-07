#include<stdio.h>
#include<string.h>

char a[]="WELCOMETOZOHOCORPORATIONS";
int i,j,k=0,n,mid,l,row;

void main()
{
	n=strlen(a);
	mid=(n+1)/2;
	row=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			   printf("%c",a[i]);
			}
			else if(i+j == n-1 )
			{
			   	 printf("%c",a[row-i]);
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}
