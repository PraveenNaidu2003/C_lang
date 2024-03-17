#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sellsrt(int *arr,int num)
{
    int i,j,k,n=num/2;
    for(i=0;i<n;i++)
    {
        num/=2;
        for(j=0;j<num;j++)
        {
            if(arr[j]==arr[num+j])swap(&arr[j],&arr[j+1]);
        }
    }
    
}
int main()
{
    int i,num;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)scanf("%d",arr[i]);
    sellsrt(arr,num);
}