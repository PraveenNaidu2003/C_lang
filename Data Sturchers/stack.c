#include <stdio.h>
#include <stdlib.h>
const int max;
int top=-1;
void Push(char **ptr)
{
    if(top==max-1)printf("\nstack is Full!..WE CAN NOT Insert Data\n");
    else
    {
        top++;
        printf("Enter the element that you want to Insert:");
        scanf("%s",&ptr[top]);
    }
}
void Pop(char **ptr)
{
    if(top==-1)printf("Stack is empty !..Nothing to Pop");
    else
    {
        printf("%s",&ptr[top]);
        top--;
    }
}
void Display(char **ptr)
{
    if(top==-1)printf("Stack is empty !..Nothing to Display");
    else
    {
        while (top!=-1)
        {
            printf("%s",&ptr[top]);
            top--;
        }
    }
}
void Peek(char **ptr)
{
    if(top==-1) printf("Stack is empty!....\n");
    else printf("%s",ptr[top]);
}
void Empty()
{
    if(top==-1)printf("Stack is empty!..");
    else printf("Stack is non Empty!..");
}
int main()
{
    int opt;
    printf("Enter the maximum size if the stack:");
    scanf("%d",&max);
    char stack[max][20];
    mainMenu:printf("\n\n.....MENU!......\n1.Push\n2.Pop\n3.Display\n4.Is stack Empty\n5.Peek\n6.Exit");
    printf("\nplese select the option from the list:");
    scanf("%d",&opt);
    while(opt!=6)
    {
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
        goto mainMenu;
    }
    return 0;
}
