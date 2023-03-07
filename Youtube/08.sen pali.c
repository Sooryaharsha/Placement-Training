#include<stdio.h>
#include<string.h>

char string[]="Madam";
int n,start,end,count=0;

void main()
{
	n=strlen(string);
	puts(string);
	start=0;
	end=n-1;
	while(start<end)
	{
		if(string[start]==string[end])
		{
			start++;
			end--;
			count++;
		}
		else
		{
			break;
		}
		
	}
	if(count==n/2)
	{
		printf("The given string is a palindrome !!! ");
	}
	else
	{
		printf("loser");
	}
}
