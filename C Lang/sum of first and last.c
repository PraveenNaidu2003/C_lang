/*to sum of first and last  digits in give number
Author Ch Ravi Kumar Satya Sai Praveen
Date :22 Feb 2022*/
#include <stdio.h>
int main()
{
int num62,count62=1,i62,sum62,numb62;
printf("enter a number:");
scanf("%d",&num62);
numb62=num62;
for(num62;num62>=10;num62/=10)
count62++;
num62=numb62;
int rem62[count62];
//printf("\nno.of digits in give number is %d",count62);
 for(i62=0;i62<count62;i62++)
{
rem62[i62]=num62%10;
num62/=10;
}
sum62=rem62[0]+rem62[count62-1];
printf("sum of first and last digit is %d",sum62);
return 0;
}