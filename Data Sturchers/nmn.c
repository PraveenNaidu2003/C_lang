#include<stdio.h>
void swap()
{
    int i;
    printf("enter:");
    scanf("%d",&i);
    if(i==6)return;
    printf("jai %d\t",i);
    swap();
    printf("\n Ganesha!....\t%d",i);
}
int main()
{
    swap();
}