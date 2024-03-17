#include <stdio.h>
#define max 15
struct stack
{
    int element[max];
    int top;
};
void push(struct stack *ptr)
{
    ptr->top++;
    printf("Enter the element that you want to push in to the stack");
    scanf("%d",ptr->element[ptr->top]);
}
void Display(struct stack *ptr)
{
    int i=0;
    for(i=0;i<=ptr->top;i++)
    printf("the element in %d th position the value is %d",i+1,ptr->element[i]);
}
int main()
{
    int op;
    struct stack s1;
    s1.top=-1;
    struct stack *ptr;
    while(1)
    {
        options:printf("\n\n Select your option \n\n 1.PUSH\n2.POP\n3.IS EMPTY\n4.IS FULL\n5.PEEK\n6.COUNT\n7.CHANGE\n8.DISPLAY\n9.EXIT");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            push(&s1);
            break;
            /*case 2:
            pop(&s1);
            break;
            case 3:
            IsStackEmpty(&s1);
            break;
            case 4:
            IsStackFull(&s1);
            break;
            case 5:
            peek(&s1);
            break;
            case 6:
            count(&s1);
            break;
            case 7:
            change(&s1);
            break;
            case 8:
            Display(&s1);
            break;*/
            case 9:
            exit(0);
            default:printf("\n\n Wrong Inpute\n\n");
            goto options;
        }        
    }
    return 0;    
}