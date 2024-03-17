/*to swap number first and last  digits in give number
Author Ch Ravi Kumar Satya Sai Praveen
Date :22 Feb 2022*/
#include <stdio.h>
int main()
{
int num62,count62=1,i62,j62,numb62,new62=0;
printf("enter a number:");
scanf("%d",&num62);
numb62=num62;
for(num62;num62>=10;num62/=10)
count62++;
num62=numb62;
int rem62[count62],k62,l62,pro62=10;
printf("\nno.of digits in given number is %d\n",count62);
 for(i62=0;i62<count62;i62++)
 {
rem62[i62]=num62%10;
num62/=10;
 }
new62=rem62[count62-1];
for(k62=1;k62<=count62-2;k62++)
  {
     for(l62=1;l62<=count62-2;l62++)
      { 
        if(k62==l62)
        {new62+=(rem62[k62]*pro62);
        pro62*=10;
        continue;}
      }
    
  }
  new62+=(rem62[0]*pro62);
printf("the New number is %d",new62);
return 0;
}