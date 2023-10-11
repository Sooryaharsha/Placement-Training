#include<stdio.h>
int main(){
	int len,ind;
	char str[100];
	scanf("%[^\n]%n",str,&len);
	for(ind=len-1;str[ind]!=' ';ind--);
	printf("\nLength of the last word is : %d",len-ind);
	
}
