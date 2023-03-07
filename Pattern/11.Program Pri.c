#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i,j,k,n,mid;
char string[100];
int bol=1;

void main()
{
	printf("Enter the string : ");
	gets(string);
	printf("The given string is : ");
	puts(string);
	n=strlen(string);
	mid = n/2;
	k=1;j=0;
	
	while(bol)
	{
		j=0;
		for(i=mid;j<k;i=(i+1)%n)
		{
			printf("%c",string[i]);
			j++;
		}
		k++;
		printf("\n");
		bol= k<=n ? 1 : 0;
		
	}
	
}
