#include<stdio.h>
#include<string.h>

char string[100],rev[20][20];
int i,j=0,k=0,n,l;

void main()
{
	printf("Enter the string : ");
	gets(string);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		if(string[i]==' ')
	    {
	    	rev[j][k++]=0;
	    	j++;
	    	k=0;
		}
		else
		{
			rev[j][k++]=string[i];
		}
	}
printf("\nValues in Rev : ");
i=j;
while(i>=0)
{
	l=0;
	while(rev[i][l]!=0)
	{
		printf("%c",rev[i][l]);
		l++;
	}
	printf(" ");
	i--;
}

}


