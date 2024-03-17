//Bubble Short Programe
#include<stdio.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int num,i,j;
    printf("Enter how many numbers you want to enter:");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        printf("Enter the %dth number:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num-1;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j]) swap(&arr[i],&arr[j]);
        }
    }
    for(i=0;i<num;i++)
    printf("\n %d",arr[i]);
    
    return 0;

}