#include<stdio.h>
void main()
{

int x=4, a=2, b=4,c=8;
if(x==b)
{
	x=a;
}
else{
	x=b;
}

if(x!=b)
{
	c=c+b;
}
else
{
	c=c+a;
	
}

printf("%d",c);
}
