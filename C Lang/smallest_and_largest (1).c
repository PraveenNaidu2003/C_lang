/*to calculate smallest and largest number
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
 {
int i62,numb62,lar62,sma62,smat62=0,lart62=0;
printf("how many numbers do you want:");
scanf("%d",&numb62);
int num62[numb62];
   for(i62=0;i62<numb62;i62++)
   {
   printf("enter number %d:",i62+1);
   scanf("%d",&num62[i62]);
   }
lar62=sma62=num62[0];
lart62=smat62=num62[1];
  for(i62=1;i62<numb62;i62++)
   {
     if(lar62<num62[i62])
    {lart62=lar62;
     lar62=num62[i62];}
    else if(lart62<num62[i62])
    lart62=num62[i62];
    if(sma62>num62[i62])
    {smat62=sma62;
    sma62=num62[i62];}
    else if(smat62>num62[i62])
    smat62=num62[i62];
   }
//printf("the smallest number is %d\n",sma62);
printf("the second smallest number is %d\n",smat62);
//printf("the largest number is %d",lar62);
printf("the second largest number is %d",lart62);
return 0;
}