#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insstr(int *arr,int str)
{
    if(arr[str]<arr[str-1]){swap(&arr[str],&arr[str-1]); insstr(arr,str-1);}
}
void inssrt(int *arr,int srt,int las)
{
    int i;
    for(i=srt;i<las;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(&arr[i],&arr[i+1]);
            insstr(arr,i);
        }
    }
}
int main()
{
    int num,i;
    printf("Enter the total number of elements:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the data to be sorted:");
    for(i=0;i<num;i++)scanf("%d",&arr[i]);
    inssrt(arr,0,num-1);
    printf("Elements after sorting are:\n");
    for(i=0;i<num;i++)printf("%d\t",arr[i]);
    return 0;
}