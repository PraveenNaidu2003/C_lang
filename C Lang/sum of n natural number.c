/*to sum all number blw 0 to n
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
 {
int i62,num62,sum62=0;
printf("enter how many numbers:");
scanf("%d",&num62);
  for(i62=1;i62<=num62;i62++)
       sum62+=i62;
    printf("%d \n",sum62);
    printf("%d",num62*(num62+1)/2);
return 0;
 }