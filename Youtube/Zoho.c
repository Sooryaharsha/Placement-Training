#include<stdio.h>

int num;
char ch;

void main()
{
	while(scanf("%c%d",&ch,&num))
	{
		while(num--)
		{
			printf("%c",ch);
		}
	
	}
	
}
