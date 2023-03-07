#include<stdio.h>
int main()
{
	int n=10,count=0,sum=0;
	while(n-- >0)
	{
      printf("\n n = %d",n);
		n/=2;
		count++;
		sum+=n;
	    printf("\n Count = %d",count);
	    printf("\n Sum = %d",sum);
	    printf("\n n = %d\n",n);
	}
	return 0;
}
