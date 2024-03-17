/*to calculate no.of digits in give number
Author Ch Ravi Kumar Satya Sai Praveen
Date :22 Feb 2022*/
#include <stdio.h>
int main()
{
int num62,count62=1,i62,j62,numb62;
printf("enter a number:");
scanf("%d",&num62);
numb62=num62;
for(num62;num62>=10;num62/=10)
count62++;
printf("\nno.of digits in give number is %d",count62);
 
return 0;
}