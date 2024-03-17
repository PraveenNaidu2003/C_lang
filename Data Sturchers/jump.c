#include<stdio.h>
#include<stdlib.h>
void jmpsrc(int *arr,int num,int src)
{
    int jmp,i,j;
    jmp=num/6;
    for(i=1;arr[i*jmp]<src;i++);
    for(j=(i-1)*jmp;j<=i*jmp;j++){if(arr[j]==src){printf("elelment found at %d possition",j+1);return;}}
    printf("Element not found!..");
}
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
int main()
{
    int i,num,jmp,sre;
    printf("Enter the number of elements to emter:");
    scanf("%d",&num);int arr[num];
    printf("Enter the data into the array:");
    for(i=0;i<num;i++)scanf("%d",&arr[i]);
    bblsrt(arr,num);
    printf("Enter the number you want to search:");
    scanf("%d",&sre);
    jmpsrc(arr,num,sre);
    return 0;
}