/*to print multiplication table of any number
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
 {
int num62,i,fac62=1;
printf("enter a number:");
scanf("%d",&num62);
for(i=2;i<=num62/2;i++)
{if(num62%i==0)fac62++;}
if(fac62==1)
printf("the number is prime");
else
printf("the given number is composed ");
return 0;
 }