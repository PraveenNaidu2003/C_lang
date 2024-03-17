#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selsrt(int *arr,int num)
{
    int i,j,temp;
    for(i=0;i<num;i++)
    {
        temp=i;
        for(j=i+1;j<num;j++)if(arr[temp]>arr[j])temp=j;
        swap(&arr[temp],&arr[i]);
    }
}
int main()
{
    int num,i;
    printf("Enter the number of elements to enter");
    scanf("%d",&num);
    int arr[num];
    printf("enter the data:");
    for(i=0;i<num;i++)scanf("%d",&arr[i]);
    selsrt(arr,num);
    for(i=0;i<num;i++)printf("%d\t",arr[i]);
    return 0;
}