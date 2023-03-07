#include<stdio.h>

int i,j,totcol,totspace,k,n,s;

void main()
{
	pattern1();
}

void pattern1()
{
  n=5;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=2*n-1;j++)
  	{
  		totcol= j>n? 2*n-i : i;
  		while(totcol!=0)
  		{
  			printf("*");
  			totcol--;
		  }
  		totspace=n-totcol;
  		for(s=0;s<totspace;s++)
  		{
  			printf(" ");
		  }
	  }
	  printf("\n");
  }

}

