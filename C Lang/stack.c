#include<stdio.h>
#include <stdlib.h>
const int max;
int top=-1;
void Push(int *arr)
{
    if(top==max-1) {printf("\n...!stack is full!..."); return;}
    top++;
    printf("\nEnter the number to push in to the stack:");
    scanf("%d",&arr[top]);
}
void Pop(int *arr)
{
    if(top==-1) {printf("\n...! stack is empty!..."); return;}
    printf("\nThe element that is poped is %d",arr[top]);
    top--;
}
void Display(int *arr)
{
    if(top==-1) {printf("stack is empty!..Nothing to print..");return;}
    int i;
    for(i=top;i<=0;i--) printf("%d\t",arr[top]);
}
void IsStackEmpty(int *arr)
{
    if(top==-1) printf("\nStack is empty!..");
    else printf("Stack is not empty!...");
}
void peek(int *arr)
{
    if(top==-1) printf("stack is empty!..");
    else printf("the top element is %d",arr[top]);
}
int main()
{
    int opt;
    printf("\nEnter the number maximun number of elements:");
    scanf("%d",&max);
    int stack[max];
    while(1)
    {
        printf("\n\n.....MENU!......\n1.Push\n2.Pop\n3.Display\n4.Is stack Empty\n5.Peek\n6.Exit");
        printf("\nplese select the option from the list:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            Push(stack);
            break;
            case 2:
            Pop(stack);
            break;
            case 3:
            Display(stack);
            break;
            case 4:
            IsStackEmpty(stack);
            break;
            case 5:
            peek(stack);
            break;
            case 6:
            exit(0);
            default:printf("\n!wrong input!....");
        }    
    }
    return 0;
}