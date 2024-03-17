/* A Linear search
Ravi Kumar 
21B91A6206*/
#include <stdio.h>
int main()
{
    int num,i,cmp;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&num);
    int arr[num];
    printf("\nEnter all the numbers that you want to search");
    for(i=0;i<num;i++)
    {
        printf("\nEnter %dth element :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the Number that you want to search:");
    scanf("%d",&cmp);
    for(i=0;i<num;i++)
    {
        if(arr[i]==cmp)
        {
            //printf("we get the number at %dth possition ",i+1);
            break;
        }         
    }
    if(i==num)printf("The number is not Found");
    else printf("Element found at %d possition",i+1);
    return 0;
}