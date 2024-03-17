#include <stdio.h>
#include <stdlib.h>
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
void inpolser(int *arr,int fir,int las,int src)
{
    int pos;
    pos=fir+(src-arr[fir])*(las-fir)/(arr[las]-arr[fir]);
    if(arr[pos]==src)printf("element found at %d possation",pos+1);
    else printf("Element not found!....");
}
int main()
{
    int num,i,pos;
    printf("Enter total number of elements:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the data which is equally distubrited:");
    for(i=0;i<num;i++)scanf("%d",&arr[i]);
    bblsrt(arr,num);
    for(i=0;i<num;i++)printf("%d\t",arr[i]);
    printf("Enter the element to serche:");
    scanf("%d",&pos);
    inpolser(arr,0,num-1,pos);
}