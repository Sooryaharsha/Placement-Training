#include<stdio.h>
void main()
{
	unsigned int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	int count =0;
	for(;num;num>>=1)
	{
		if(num & 1)
		{
			count++;
		}
	}
	printf("Count = %d",count);
}
