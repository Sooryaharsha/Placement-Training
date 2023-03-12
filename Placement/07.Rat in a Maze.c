#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool solution(int[][] , int[][] , int ,int)
bool safe(int[][],x,y)


bool solution(int q[4][4],int sol[4][4],int x,int y)
{
	if(x<=4-1 && y<=4-1 && q[x][y]==1)
	{
		sol[x][y]=1;
		return true;
	}
	if(safe(q,x,y)==true)
	{
		if(sol[x][y]==1)
			return false;
		sol[x][y]=1;
	}
	if(solution(q,sol,x+1,y)==true)
		return true;
	if(solution(q,sol,x-1,y)==true)
		return true;
	if(solution(q,sol,x,y+1)==true)
		return true;
	if(solution(q,sol,x,y-1)==true)
		return true;
	sol[x][y]=0;
	return false;
	
}

bool safe(int q[4][4],int x,int y)
{
	if(x>=0 && y>=0 && x<4 && y<4 && q[x][y]==1)
		return true;
	return false;
}

void main()
{
	int q[4][4]={{1,1,1,0},
				 {0,1,0,0},
				 {1,1,0,0},
				 {0,1,1,1}};
	
	int sol[4][4]={{0,0,0,0},
				   {0,0,0,0},
				   {0,0,0,0},
				   {0,0,0,0}};
	int i,j;
	
	if(solution(q,sol,0,0)==false)
		printf("No Solution");
	else
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",sol[i][j]);
				
			}
			printf("\n");
		}
	}
	
}






















