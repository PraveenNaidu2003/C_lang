/*to  calculate sum of digits in give number
Author Ch Ravi Kumar Satya Sai Praveen
Date :22 Feb 2022*/
#include <stdio.h>
int main()
{
int num62,rem62,sum62;
printf("enter a number:");
scanf("%d",&num62);
for(num62;num62>=10;num62/=10)
{
rem62=num62%10;
sum62+=rem62;
}

printf("\n sum of the digit is %d",sum62);
return 0;
}