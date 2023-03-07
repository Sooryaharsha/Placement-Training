/*1c1c0a1b1 where c is xor operator and b is and operator and  a is the and operator */
 
 #include<stdio.h>
 #include<string.h>
 #include<math.h>
 
 int ans,equ,i,n;
 char ch[10];
 
 void main()
 {
 	printf("Enter the equation : ");
 	scanf("%s",ch);
 	ans=ch[0]-48;
 	printf("\nFirst value is %d",ans);
 	n=sizeof(ch)/sizeof(ch[0]);
 	printf("\n %d is the length of the string ",n);
 	for(i=1;i<n;i+=2)
 	{
 		switch(ch[i])
 		{
 			case 'c':
 				ans=ans ^(ch[i+1]-48);
 				printf("\n%d",ans);
 				break;
 				
 			case 'b':
 				ans=ans | (ch[i+1]-48);
 				printf("\n%d",ans);
 				break;
 				
 			case 'a':
 				ans=ans & (ch[i+1]-48);
 				printf("\n%d",ans);
 				break;
 				
		 }
	 }
	printf("\n%d is the answer",ans);
 }
