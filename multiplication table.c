/*to print multiplication table of any number
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
{
  int i62, num62, trm62 = 0;
  printf("which table you want:");
  scanf("%d", &num62);
  printf("enter the no.of terms:");
  scanf("%d", &trm62);
  for (i62 = 1; i62 <= trm62; i62++)
    printf("%d x %d= %d \n", num62, i62, num62 * i62);
  return 0;
}