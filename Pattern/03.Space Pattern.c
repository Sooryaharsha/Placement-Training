#include<stdio.h>

int i,j,n,k,space,s,totnoofCol,totspace;

void main()
{
	pattern40();  //1,2,12,21,120,3,4,30,40,34,43,340,5,6,7
}

void pattern1()
{
	n=20;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{								//totalspace = n-i 
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		  printf("*");	
		}
		printf("\n");
	}
}

void pattern2()
{
	n=5,j=1;
	for(i=1;i<=n;i++)
	{
		for(s=n+1-i;s<n;s++)
		{
			printf(" ");
		}								//totalspace = n-j Where j (TotalnoofCol = n+1-i)
		for(j=1;j<=n+1-i;j++)
		{
		  printf("*");	
		}
		printf("\n");
	}
}

void pattern12()
{
	n=5;
	for(i=1;i<2*n;i++)
	{
		totnoofCol = i > n ? 2*n-i : i;
		totspace = n-totnoofCol;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totnoofCol;j++)
		{
		  printf("*");	
		}
		printf("\n");
	}
}

void pattern120()
{
	n=5;
	for(i=1;i<2*n;i++)
	{
		totnoofCol = i > n ? 2*n-i : i;
		totspace = n-totnoofCol;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totnoofCol;j++)
		{
		  if(j==1 || j==totnoofCol )
		  {
		  	printf("*");
		  }
		  else
		  {
		  	printf(" ");
		  }
		  	
		}
		printf("\n");
	}
}

void pattern21()
{
	n=5;
	for(i=1;i<2*n;i++)
	{
		totnoofCol = i > n ? i-n+1 : n+1-i;
		totspace = n-totnoofCol;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totnoofCol;j++)
		{
		  printf("*");	
		}
		printf("\n");
	}
}



void pattern3()
{
	n=5,j=1;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		  printf("* ");	
		}
		printf("\n");
	}
}

void pattern4()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(s=n+1-i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=n+1-i;j++)
		{
		  printf("* ");	
		}
		printf("\n");
	}
}

void pattern30()
{
	n=10,j=1;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i || i==n)
			{
				printf("* ");	
			}
			else
			{
				printf("  ");
			}
		  
		}
		printf("\n");
	}
}

void pattern40()
{
	n=20;
	for(i=1;i<=n;i++)
	{
		for(s=n+1-i;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=n+1-i;j++)
		{
			if(j==1 || j==n+1-i || i==1)
			{
				printf("* ");
			}
		  	else
		  	{
		  		printf("  ");
			}
		}
		printf("\n");
	}
}

void pattern34()
{
	n=5,j=1;
	for(i=1;i<n*2;i++)
	{
		totnoofCol = i>n ? n*2-i : i;
		totspace=n-totnoofCol;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totnoofCol;j++)
		{
			
		  printf("* ");	
		}
		printf("\n");
	}
}

void pattern340()
{
	n=5,j=1;
	for(i=1;i<n*2;i++)
	{
		totnoofCol = i>n ? n*2-i : i;
		totspace=n-totnoofCol;
		for(s=0;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totnoofCol;j++)
		{
		  if(j==1 || j==totnoofCol)
		  {
		  	printf("* ");
		  }
		  else
		  {
		  	printf("  ");
		  }
		}
		printf("\n");
	}
}





