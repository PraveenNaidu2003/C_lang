#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int st;
    st=*a;
    *a=*b;
    *b=st;    
}
void bubbleSort(int *arr,int size)
{
    int i,j;
    for(j=size-1;j>=0;j--)
    {
        for(i=0;i<j;i++)
        if(arr[i]>=arr[i+1]) swap(&arr[i],&arr[i+1]);
    }
}
int binarySearch(int *arr,int fis,int las,int ser)
{
    int mid,a=0;
    mid=(fis+las)/2;
    if(arr[mid]==ser) {printf("The number %d is found at %d position",ser,mid+1);a=1; return a;}
    else if(arr[mid]<ser)  binarySearch(arr,mid+1,las,ser);
    else binarySearch(arr,0,mid-1,ser);
}
int main()
{
    
    int i,num,ser;
    printf("Enter number of elements you want to enter:");
    scanf("%d",&num);
    int arr[num];
    printf("\nenter the data you want to short:");
    for(i=0;i<num;i++) scanf("%d",&arr[i]);
    bubbleSort(arr,num);
    printf("\nThe Array after shorted is :");
    for(i=0;i<num;i++) printf("%d\t",arr[i]);
    printf("\nEnter the number you want to search:");
    scanf("%d",&ser);
    binarySearch(arr,0,num-1,ser);
    return 0;
}