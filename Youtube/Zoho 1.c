//Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the following conditions 
//1.5 if a perfect square 
//2.4 if multiple of 4 and divisible by 6 
//3.3 if even number 
//And sort the numbers based on the weight and print it as follows <10,its_weight>,<36,its weight><89,its weight> 
//Should display the numbers based on increasing order. 


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int a[]={10,36,54,89,12};
int i,sqr,sqr1,sum=0,n,j,x=-1,y=-1;
int b[10][10];
void check(int);
void display();

void main()
{
	for(i=0;i<=4;i++)
	{
		printf("%d\t\t",a[i]);
	}
	printf("\n");
	for( i=0;i<=4;i++)
	{
		check(a[i]);
	}
	display();
	getch();
}

void check(int no)
{
	sum=0;
	printf("\n\n%d",no);
	if(no%4 ==0 && no%6==0)
	{
		sum=4;
	}
	if(no%2==0)
	{
		sum=sum+3;
	}
	sqr=sqrt(no) ;
	printf("\n\n%d",sqr);
	sqr1=sqr*sqr;
	if(sqrt(no)==(sqr1))
	{
		sum = sum+5;
	}
	printf("\n Weigtage of %d is %d",no,sum);
	
	//storing
	
	b[++x][0]=no;
	b[++y][1]=sum;
	printf("\n\n%d",b[x][y]);


}

void display()
{
	printf("\n\nNumber and its corresponding weightage : \n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
