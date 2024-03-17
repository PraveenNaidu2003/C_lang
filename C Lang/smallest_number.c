/*to calculate smallest number
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
 {
int i,numb62,fac62;
printf("how many numbers do you want:");
scanf("%d",&numb62);
int num62[numb62];
   for(i=0;i<numb62;i++)
   {
   printf("enter number %d:",i+1);
   scanf("%d",&num62[i]);
   }
fac62=num62[0];
  for(i=1;i<numb62;i++)
   {
     if(fac62>num62[i])
     fac62=num62[i];
   }
printf("the smallest number is %d",fac62);
return 0;
}