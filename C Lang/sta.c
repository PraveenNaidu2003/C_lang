#include <stdio.h>
#include <stdlib.h>
int top=-1;
int num;
void Push(char *ptr)
{
    if(top==num-1)
        printf("\nStack is Full!....\n");
    else
    {
        top++;
        printf("Enter the Data that you want to insert");
        gets(ptr[top]);
    }
}
void Pop(char *ptr)
{
    if(top==-1)
        printf("\nStack is Empty!..\nNothing to Print");
    else
    {
        puts(ptr[top]);
        top--;
    }
}
void Display(char *ptr)
{
    if(top==-1)
        printf("Stack is empty!..\n");
    else
    {
        while(top!=-1)
        {
            puts(ptr[top]);
            top--;
        }
    }
}
void Peek(char *ptr)
{
    if(top==-1)
        printf("Stack is Empty!..\n");
    else
        puts(ptr);
}
int main()
{
    int opt;
    printf("Enter number of elements you want to insert in the stack\n");
    scanf("%d",&num);
    char stack[10][num];
mainMenu:
    printf("\n\n********* MENU ************\n1. Push\n2. Pop\n3. Display\n4. Is Stack Empty\n5. Peek\n6. Exit\nEnter your choice: ");
    scanf("%d",&opt);
    scanf("%s",stack+0);
    while(opt!=9)
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
            Empty(stack);
            break;
        case 5:
            Peek(stack);
            break;
        case 6:
            exit(0);
        default:
            printf("\nWrong OutPut");
        }
        goto mainMenu;
    }
    return 0;
}