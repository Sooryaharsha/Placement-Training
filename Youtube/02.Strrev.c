#include<stdio.h>

char str[10];

void reverse(char *a)
{
	printf("\n%s",a);
	printf("\n%d",*a);
	printf("\n%d",a);
	
	if(*a)
	{
		reverse(a+1);
		printf("%c",*a);
		
	}

}

void main()
{
   printf("Enter the string : ");
   scanf("%s",str);
   reverse(str);
}
