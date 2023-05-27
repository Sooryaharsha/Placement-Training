#include<stdio.h>
a() 
{
	printf("Function");
}
b()
{
	printf("Function in C");
}
c()
{
	printf("C function");
}
main()
{
	int (*ptr[3])();
	ptr[0] = a;
	ptr[1] = b;
	ptr[2] = c;
	printf("%d",ptr[2]);
	ptr[2]();
	return 0;
}

#include<stdio.h>
int main()
{
	void swap(); 
	int x = 5, y = 10;
	swap(&x, &y);
	printf("x = %d y = %d",x,y);
	return 0;
}
void swap(int *a, int *b)
{
	*a ^= *b, *b ^= *a, *a ^= *b;
}
