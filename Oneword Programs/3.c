#include<stdio.h>
void main()
{
	int word =112, yes=0;
	while(word>0)
	{
		if((word & 0x3) == 0x3)
		{
			yes=1;
			break;
		}
		word>>=1;
	}
	printf("%d %d",word,yes);
}

