#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


int main(){
	
//	lengthOfString();
//	pipeLine();
//	cloud();
//	productDiscount();
//	shoot();
//	nambiyarNumber();
//	CountDigitOccurences();
//	reducedSubtractedForm();
	
}

void lengthOfString()
{
	int len,ind;
	char str[100];
	scanf("%[^\n]%n",str,&len);
	for(ind=len-1;str[ind]!=' ';ind--);
	printf("\nLength of the last word is : %d",len-ind);
	
}

void pipeLine()
{
	int N,ind;
	scanf("%d",&N);
	int pipe_len[N];
	for(ind=0;ind<N;ind++)
		scanf("%d",&pipe_len[ind]);
	int prev_pipe=pipe_len[0];
	printf("%d ",prev_pipe);
	for(ind=1;ind<N;ind++)
	{
		if(prev_pipe > pipe_len[ind])
		{
			prev_pipe = pipe_len[ind];
			printf("%d ",prev_pipe);
		}
	}
}

void cloud()
{
	int noOfReq,i,sum=0;
	scanf("%d",&noOfReq);
	int req[noOfReq];
	for(i=0;i<noOfReq;i++)
		scanf("%d",&req[i]);
	for(i=0;i<noOfReq;i+=2)
		sum+=req[i];
	sum>0? printf("\nThe alloacted memory is : %d bits",sum) : printf("\nThe dealloacted memory is : %d bits",(sum*-1));
	
	
}


void productDiscount()
{
	int noOfproducts,i,allocatedPrice,count=0;
	printf("\nNo of Products : ");
	scanf("%d",&noOfproducts);
	printf("\nAllocated price : ");
	scanf("%d",&allocatedPrice);
	int orders[noOfproducts];
	printf("\nNo of Orders for each Product : ");
	for(i=0;i<noOfproducts;i++)
		scanf("%d",&orders[i]);
	
	for(i=0;i<noOfproducts;i++)
	{
		if(allocatedPrice % orders[i] == 0 )
		{
			count++;
		}
	}
	
	printf("\nThe no of Products eligible for discount is : %d ",count);
	
}


void doorProblem()
{
	int noOfTurns;
	printf("No of Turns : ");
	scanf("%d",noOfTurns);
	
}


void shoot()
{
	
	int i,noOfpersons,alive,count;
	scanf("%d",&noOfpersons);
	int persons[noOfpersons];
	for( i=0;i<noOfpersons;i++)
	{
		persons[i]=i+1;
	}
	if(noOfpersons<=2) printf("1");
	else{
		i=1;
		while(count!=noOfpersons-1)
		{
			alive = persons[i-1];
			printf("\nShooter : %d",alive);
			printf("\nDead : %d",persons[i]);
			persons[i] = -1;
			if(count<0)
			i=(i+2)%noOfpersons;
			
			
		}
	}
	printf("\n\nThe person who survived is  : %d ",alive);
	
 }                                         

//power =(1<<(int)log2(N))
//power=pow(2,(int)log2(N));
//printf("%d",(N-power)*2+1);
//printf("%d",(N<<1)^((power<<1))|1)


void nambiyarNumber()
{
	long long int phnNo = 1234567890;
	long long int denom = 1000000000;
	int num,sum=0,digits,nambiyar=0,loopCount=1;
	
	while(loopCount<=10){

		num = phnNo/denom;
		sum+=num;
		printf("\nNumber : %d \t Sum : %d ",num,sum);
		if(loopCount>1 && num%2!=0  )
		{
			
			digits = noOfDigits(sum);
			nambiyar = nambiyar*(pow(10,digits))+sum;; 
			sum=0;
			printf("\n\nAppend the value to Nambiyar Number ! \n");
		}
		if( sum==0 && loopCount==9 )
		{
			nambiyar = nambiyar*10; 
		}
		
		phnNo = phnNo % denom;
		denom  = denom / 10;
		
		loopCount++;
		 
			
	}
	printf("\n\nThe Nambiyar Number is : %d",nambiyar);
}

int noOfDigits(sum)
{
	int rem,count=0;
	while(sum>0)
	{
		count++;
		sum=sum/10;
		
	}
	return count;
}

void CountDigitOccurences()
{
	int l=1,u=79,x=4,i,count=0,digits,num;
	for(i=l;i<=u;i++)
	{
		digits = noOfDigits(i);
		printf("\nNumber : %d \t Digits : %d ",i,digits);
		
		if(i<10 && i==x)
		{
			count++;
		}
		else{
			int temp = i;
			while(digits--)
			{
				num = temp%10;
				num == x ? count++ : count;
				temp=temp/10;	
			}
		}
	}
	printf("\n\nThe no of Occurance of %d is : %d",x,count);
}



//73615

//abs(((num/10)%10) -(num%10))

//void reducedSubtractedForm()
//{
//
//	
//}
 







