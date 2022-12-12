#include <stdio.h>
void main(){
    int num;
    printf("Enter the total number of elements:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the data one by one with entry:");
    for(int i=0;i<num;i++)
    scanf("%d",&arr[i]);
    
}