/*to swap first and last  digits in give number
Author Ch Ravi Kumar Satya Sai Praveen
Date :22 Feb 2022*/
#include <stdio.h>
int main()
{
int num62,count62=1,i62,j62,numb62,an62;
printf("enter a number:");
scanf("%d",&num62);
numb62=num62;
for(num62;num62>=10;num62/=10)
count62++;
num62=numb62;
int rem62[count62];
printf("\nno.of digits in given number is %d\n",count62);
 for(i62=0;i62<count62;i62++)
{
rem62[i62]=num62%10;
num62/=10;
}
printf("\t%d",rem62[0]);

for(count62;count62>2;count62--)
printf("\t%d",rem62[count62-2]);
printf("\t%d",rem62[count62-1]);
return 0;
}