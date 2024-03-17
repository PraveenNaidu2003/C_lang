#include<stdio.h>
#include<stdlib.h>
void twore(char **arr,int num,int strat)
{
    char place[num][20];
    int i=strat;
    printf("disk %s moves from %s to %s!...",arr[i]);
}
int main()
{
    int num,i;
    printf("Enter number of disks you want to shift:");
    scanf("%d",&num);
    char disk[num][20];
    printf("Enter the name of the disks!....");
    for(i=0;i<num;i++) scanf("%s",disk[i]);
    twore(disk,num,num);
}