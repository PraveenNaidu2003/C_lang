//Ohm Namo Shivay
// Push,Pop, Display,Is stack empty,Peek
#include<stdio.h>
#include<stdlib.h>
#define max 10

void push(char *conf,int *top)
{
    if(top==9)
        printf("Stack is full!");
    else
    {
        top++;
        printf("Enter the data you want to enter:");
        scanf("%s",conf[top]);
    }
}
void pop(char *conf,int *top)
{   if(top==-1)
        printf("Stack is empty!..\nNothing to pop");
    else
    {
        printf("%s",conf[top]);
        top--;
    }
}
void display(char *conf,int *top)

{
    if(top==-1)
        printf("Stack is empty!..\nNothing to Print");
    else
    {   while(top!=-1)
        {
            printf("%s",conf[top]);
            top--;
        }
    }
}
void empty(char *conf,int *top)
{
    if(top==-1)
        printf("Stack is empty");
    else
        printf("Stack is not empty");
}
int main()
{
    char conf[10][max];
    int top;
    top=-1;
    int opt;
    while(opt!=6)
    {
mainMenu:
        printf("\n\n********* MENU ************\n1. Push\n2. Pop\n3. Display\n4. Is Stack Empty\n5. Exit\nEnter your choice: ");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            push(conf,&top);
            break;
        case 2:
            pop(conf,&top);
            break;
        case 3:
            display(conf,&top);
            break;
        case 4:
            empty(conf,&top);
            break;
        case 5:
            exit(0);
        default :
            printf("Wrong Input");
        }
    }
}