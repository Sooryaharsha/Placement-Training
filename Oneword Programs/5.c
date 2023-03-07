#include<stdio.h>
void main()
{
	char result;
	int masked,byte;
	printf("Enter the byte value : ");
	scanf("%d",byte);
	masked = byte & 0XF;
	result = masked<10? '0' + masked : 'A' + masked -10;
	printf("Result = %c",result);
	
}
