#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int x=*a;
    *a=*b;
    *b=x;
}
int * quickSort(int *arr,int las,int fir)
{
    int ref=arr[fir],ini=arr[fir],fil=arr[las-1];
    int i,tem=0,temp=las-1;
    while(ini!=fil)
    {
        if(ref<=fil) {temp--; fil=arr[temp];}
        else 
        {
            swap(&ini,&fil);
            if(ref<=ini) {tem; fil=arr[tem];}
        }
    }
}
int main()
{
    int num,i;
    printf("Enter number of elements you want to arrange in shorted order");
    scanf("%d",&num);
    int ar[num],arr[num];
    printf("\nEnter the data you wabt to short:");
    for(i=0;i<num;i++) scanf("%d",&arr[i]);
    return 0;
}