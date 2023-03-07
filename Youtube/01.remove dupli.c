#include<stdio.h>
#include<string.h>

char a[100],output[100];
int n,i,j=-1;

void main()
{
	printf("Enter the no of strings : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the string : ");
		scanf("%s",a);
		removeduplicate(a);
	}
}

void removeduplicate(char *a)
{
	j=-1;
	int flag=0;
	for(i=0;i<strlen(a);i++)
	{
		if(i==0 && a[i]!=a[i+1])
		{
			output[++j]=a[i];
			flag++;
		}
		else if(a[i+1]=='\0' && a[i]!=a[i-1])
	    {
	    	output[++j]=a[i];
		}
		else if(a[i]!=a[i+1] && a[i]!=a[i-1])
		{
			output[++j]=a[i];
		}
		
	}
/*	if(flag==0)
	{
	   printf("\n%s",output);
	}
	else
	{
	   removeduplicate(output);	
	}
	*/
	printf("\n%s",output);
	
	
}
