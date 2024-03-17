//Ohm Namo Shivay
// Push,Pop, Display,Is stack empty,Peek
#include<stdio.h>
#include<stdlib.h>
#define max 10
struct stack
{
    char conf[10][max];
    int top;
};
void push(struct stack *ptr)
{
    if(ptr->top==9)
        printf("Stack is full!");
    else
    {
        ptr->top++;
        printf("Enter the data you want to enter:");
        scanf("%s",ptr->conf[ptr->top]);
    }
}
void pop(struct stack *ptr)
{   if(ptr->top==-1)
        printf("Stack is empty!..\nNothing to pop");
    else
    {
        printf("%s",ptr->conf[ptr->top]);
        ptr->top--;
    }
}
void display(struct stack *ptr)
{
    if(ptr->top==-1)
        printf("Stack is empty!..\nNothing to Print");
    else
    {  
    int temp=ptr->top;
     while(ptr->top!=-1)
        {
            printf("%s\n",ptr->conf[ptr->top]);
            ptr->top--;
        }
        ptr->top=temp;
    }
}
void empty(struct stack *ptr)
{
    if(ptr->top==-1)
        printf("Stack is empty");
    else
        printf("Stack is not empty");
}
void peek(struct stack *ptr)
{
    if(ptr->top==-1)
        printf("Stack is Empty");
    else
        printf("%s",ptr->conf[ptr->top]);
}
int main()
{
    struct stack *ptr;
    struct stack s1;
    ptr=&s1;
    ptr->top=-1;
    int opt;
    while(opt!=6)
    {
mainMenu:
        printf("\n\n********* MENU ************\n1. Push\n2. Pop\n3. Display\n4. Is Stack Empty\n5. Peek\n6. Exit\nEnter your choice: ");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            push(ptr);
            break;
        case 2:
            pop(ptr);
            break;
        case 3:
            display(ptr);
            break;
        case 4:
            empty(ptr);
            break;
        case 5:
            peek(ptr);
            break;
        case 6:
            exit(0);
        default :
            printf("Wrong Input");
        }
    }
}