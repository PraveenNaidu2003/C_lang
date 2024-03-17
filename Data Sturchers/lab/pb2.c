// Write a program to implement the operations on stacks.
#include <stdio.h>
#include <stdlib.h>
const int num;
int top=-1;
void Push(int *arr)
{   if(top==num-1) {printf("Stack is full!.."); return;}
    top++;
    printf("\nenter the number to push:");
    scanf("%d",&arr[top]);
}
void Pop(int *arr)
{
    if(top==-1){printf("Stack is empty!.. Nothing to print"); return;}
    printf("The top most element in the satck is :%d",arr[top]);
    top--;
}
void Display(int *arr)
{
    if(top==-1) {printf("Stack is empty!.. nothing to print!"); return;}
    int i=top;
    for(i;i>=0;i--)printf("%d\t",arr[i]);
}
void Empty()
{
    if(top==-1) printf(" Yes!.. Stack is empty!... nothing to print..");
    else printf("\nNo Stack is not Empty!.. ");
}
void Peek(int *arr)
{
    if(top==-1) printf("Stack is empty!... nothing to print..");
    else printf("\n Top most element of the Stack is %d",arr[top]);
}
int main()
{
    printf("Enter the maximum length of the stack:");
    scanf("%d",&num);
    int stack[num];
    while(1)
    {
        printf("\n\n.....MENU!......\n1.Push\n2.Pop\n3.Display\n4.Is stack Empty\n5.Peek\n6.Exit");
        int opt;
        printf("\n\n Enter the operetion you want to perform:");
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
            Empty();
            break;
            case 5:
            Peek(stack) ;
            break;
            case 6:
            exit(0);
            default:printf("\n....!Wrong INPUT!...\n");
        }
    }
    return 0;
}