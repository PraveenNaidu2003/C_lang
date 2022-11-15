/*to calculate average of n numbers
Author Ch Ravi Kumar Satya Sai Praveen
Date :20 Feb 2022*/
#include <stdio.h>
int main()
{
    int count62 = 1, tot62;
    float num62, sum62 = 0;
    printf("how many numbers do you want to do:");
    scanf("%d", &tot62);
    do
    {
        printf("enter the number :");
        scanf("%f", &num62);
        sum62 += num62;
        count62++;
    } while (count62 <= tot62);
    printf("the average is :%f", sum62 / tot62);
    return 0;
}