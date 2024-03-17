#include <stdio.h>
const int num;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;    
}
void BirSer(int *arr,int str,int las,int ser)
{
    int mid;
    mid=str+las/2;
    if(arr[mid]==ser) {printf("%d is found at in %d possition",ser,mid+1);return;}
    else if(arr[mid]<ser) BirSer(arr,mid+1,las,ser);
    else BirSer(arr,str,mid,ser);
}
void BblShort(int *arr)
{
    int i,j;
    for(i=num-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1]) swap(&arr[i],&arr[i+1]);
        }
    }
}
int main()
{
    int numb,i;
    printf("Enetr the number of elements you want to enter:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the data you want to enter in the array:");
    for(i=0;i<num;i++) {scanf("%d",&arr[i]);}
    printf("Number before short:");
    for(i=0;i<num;i++) printf("%d\t",arr[i]);
    printf("\nNumbers After shorted:");
    BblShort(arr);
    for(i=0;i<num;i++) printf("%d\t",arr[i]);
    printf("\nEnter the number you want to search: ");
    scanf("%d",&numb);
    BirSer(arr,0,num,numb);
}