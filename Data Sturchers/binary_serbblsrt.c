#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bblsrt(int *arr,int num)
{
    int i,j;
    for(i=num-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])swap(&arr[j],&arr[j+1]);
        }
    }
}
int Binser(int *arr,int str,int las,int ser)
{
    int mid;
    mid=str+las/2;
    if(arr[mid]==ser){printf("element found at %d position.",mid+1); return 1;}
    else if(arr[mid]>ser)Binser(arr,str,mid,ser);
    else Binser(arr,mid+1,las,ser);
}
int main()
{
    int x,i,ser,num;
    printf("enter total number of elements you want to enter:");
    scanf("%d",&num);
    int arr[num];
    printf("enter the data you want to enter:");
    for(i=0;i<num;i++)scanf("%d",&arr[i]);
    bblsrt(arr,num);
    printf("Elements sfter sorting:");
    for(i=0;i<num;i++)printf("%d\t",arr[i]);
    printf("\nEnter the number to search:");
    scanf("%d",&ser);
    x=Binser(arr,0,num-1,ser);
    if(x!=1)printf("Element not found");
    return 0;
}