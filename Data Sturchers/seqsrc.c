#include<stdio.h>
#include<stdlib.h>
void linser(int *arr,int num,int sre)
{
    int i;
    for(i=0;i<num;i++){if(arr[i]==sre){printf("Element found at %d possition:",i+1);return;}}
    printf("Element not found!..");
}
int main()
{
    int i,num;
    printf("Enter the number of elements to search:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the data to Search:");
    for(i=0;i<num;i++)scanf("%d",&arr[i]);
    printf("Enter the number to search:");
    scanf("%d",&i);
    linser(arr,num,i);
    return 0;
}