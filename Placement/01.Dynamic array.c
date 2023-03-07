/*#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *array;
	int temp;
	int n=0,i;
	
	while(1==scanf("%d",&temp))
	{
		int *newarray = realloc(array,++n * sizeof(*newarray));
	
		array =newarray;
		array[n-1]=temp;
	}
	printf("\n\nThe number are : ");
	
	for (i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	free(array);
}*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    /*  To manage an array of varying size, we keep a pointer to the first 
        element of the array and the number of elements in the array.

        The pointer is initially null, and there are no elements in the array.
    */
    int i;
    int *Numbers = NULL;
    size_t NumberOfAllocatedElements = 0;

    /*  We get numbers one by one, using TemporaryNumber to hold them.  As long
        as scanf reports it was able to read and assign 1 item, we continue
        adding the number to the array.
    */
    int TemporaryNumber;
    while (1 == scanf("%d", &TemporaryNumber))
    {
        /*  To grow the array, increase the number of allocated elements and
            use realloc to request more space.
        */
        int *NewNumbers =
            realloc(Numbers, ++NumberOfAllocatedElements * sizeof *NewNumbers);

        /*  If realloc fails, we report an error and exit.  A more
            sophisticated program could do something else in this case.
        */
        if (!NewNumbers)
        {
            fprintf(stderr, "Error, unable to allocate memory.\n");
            exit(EXIT_FAILURE);
        }

        //  Update our pointer with the new address.
        Numbers = NewNumbers;

        //  Record the new element in the array.
        Numbers[NumberOfAllocatedElements - 1] = TemporaryNumber;
    }

    //  Show the contents of the array.
    for ( i = 0; i < NumberOfAllocatedElements; ++i)
        printf("Number %zu is %d.\n", i, Numbers[i]);

    //  Release the memory.
    free(Numbers);
}
