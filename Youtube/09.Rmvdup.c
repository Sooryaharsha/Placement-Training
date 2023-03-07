#include<stdio.h>
#include<conio.h>

void main()
{
	int nums[] ={1,1,1,2,3,4,4};
	int numsSize=7;
	int result;
	printarr(nums,numsSize);
	result = removeDuplicates(nums,numsSize);
	printf("%d",result);
	printarr(nums,result);
}

int removeDuplicates(int* nums, int numsSize){

    int i=0,j;
    int k=numsSize;
    while(i<numsSize)
    {
    	j=i+1;
        if(nums[i]==nums[j])
        {
            for(j;j<numsSize-1;j++)
             {
                nums[j]=nums[j+1];
             }
             k--;
        }
        else
        	i++;
    }
    return k;

}

void printarr(int* nums,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",nums[i]);
	}
	printf("\n\n");
}
