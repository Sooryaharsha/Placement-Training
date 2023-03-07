#include<stdio.h>


unsigned int addbyone(int n)
{
	if(n<10)
	{
		return n+1;
	}
	return n%10+1+addbyone(n/10)*10;
}
int main()
{
    int a=69;
	unsigned int returnn;
	returnn = addbyone(a);
    printf("%d",returnn);
    return 0;
}

