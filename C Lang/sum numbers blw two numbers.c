/*to sum numbers blw two numbers
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
 {
int i62,num62_1,num62_2,sum62=0;
printf("enter first number:");
scanf("%d",&num62_1);
printf("enter second number:");
scanf("%d",&num62_2);
  for(i62=num62_1;i62<=num62_2;i62++)
       sum62+=i62;
    printf("%d \n",sum62);
    
return 0;
 }