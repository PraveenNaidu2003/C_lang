/*to sum all even number blw 0 to n
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
 {
int i62,num62,sum62=0;
printf("enter the last numbers:");
scanf("%d",&num62);
  for(i62=2;i62<=num62;i62+=2)
       sum62+=i62;
    printf("%d \n",sum62);
return 0;
 }