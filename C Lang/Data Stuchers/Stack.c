// Ohm Namo Shivaya
// Stacks as a header file to import
// Stack as Last in First Out
#include <stdio.h>
struct Stack
{
    int num, index;
    int Stack[];
};
typedef struct Stack stack;
void Push(int var, stack stackname)
{
    stackname.index++;
    stackname.Stack[stackname.index] = var;
}
void Pop(stack stackname)
{
    printf("The top Most Element of the Stack is %d \n", stackname.Stack[stackname.index]);
    stackname.index--;
}
void Display(stack stackname)
{
    int temp = stackname.index;
    for (int i = temp; i >= 0; i--)
        printf("%d \t", stackname.Stack[i]);
}
void check(int value, stack stackname)
{
    for (int i = 0; i < 10; i++)
    {
        if (stackname.Stack[i] == value)
        {
            printf("The vale is in the stack at %d place", i + 1);
        }
    }
}
void show(int place, stack stackname)
{
    printf("%d", stackname.Stack[place - 1]);
}
void Peek(stack stackname)
{
    printf("%d \n", stackname.Stack[stackname.index]);
}
int Count(stack stackname)
{
    printf("%d", stackname.index + 1);
    return stackname.index + 1;
}
void Isempty(stack stackname)
{
    if (stackname.index == -1)
        printf("Yes this Stack Is empty\n");
    else
        printf("No This stack is Not Empty\n");
}
void IsFull(stack stackname)
{
    if (stackname.index == 9)
        printf("Yes this Stack Is Filled\n");
    else
        printf("No This stack is Not Fulled\n");
}
void Change(int place, int value, stack stackname)
{
    int temp = 0;
    printf("Do you want to Change %d to %d \n 1.Yes 2.No \n", stackname.Stack[place - 1], value);
    scanf("%d", &temp);
    if (temp == 1)
        stackname.Stack[place - 1] = value;
    else
        printf("Operation Cancelled Bro\n");
}
void changevalue(int previous, int value, stack stackname)
{
    for (int i = 0; i < 10; i++)
    {
        if (stackname.Stack[i] == previous)
        {
            stackname.Stack[i] = value;
        }
    }
}
stack main()
{
    struct Stack stackname;
    int shift, temp = 5;
    struct Stack *pointer;
    pointer = &stackname;
    stackname.num = temp;
    printf("%d and %d are ", stackname.index, stackname.num);

method:
    printf("\nPlese select the Operetions to Performe\n");
    printf(" 1.Push  \n 2.Pop \n 3.Show \n 4.Peek \n 5.Count \n 6.Isempty \n 7.IsFull \n 8.Display \n 9.Change  \n 10.Check \n 11.change by Value        : ");
    scanf("%d", &shift);
    switch (shift)
    {
    case 1:
        if (stackname.index == stackname.num)
        {
            printf("Stack is filled d you want to clear the satck?\n 1. Yes \n 2.No \n");
            scanf("%d", &shift);
            if (shift == 1)
                stackname.index = -1;
            break;
        }
        printf("Enter the Value you want to insert into the Stack: ");
        scanf("%d", &shift);
        Push(shift, stackname);
        break;
    case 2:
        if (stackname.index == -1)
        {
            printf("Stack is empty so you need to push into stack \n Their is nothing to pop out\n");
            break;
        }
        Pop(stackname);
        break;
    case 3:
        printf(" Enter the place where you want to check the value of the variable\n");
        scanf("%d", &shift);
        show(shift, stackname);
        break;
    case 4:
        Peek(stackname);
        break;
    case 5:
        Count(stackname);
        break;
    case 6:
        Isempty(stackname);
        break;
    case 7:
        IsFull(stackname);
        break;
    case 8:
        Display(stackname);
        break;
    case 9:
        printf(" Enter the place and the value to be chane with in the place :");
        scanf("%d %d", &shift, &temp);
        Change(shift, temp, stackname);
        break;
    case 10:
        printf("\nEnter the value you want to check in the stack : ");
        scanf("%d", &shift);
        check(shift, stackname);
        break;
    case 11:
        printf("\nEnetr the previous and finall value to change");
        scanf("%d %d", &shift, &temp);
        changevalue(shift, temp, stackname);
        break;
    default:
        printf("You have Chosses an improper option Bro so ");
        printf("/nDo you want to performe some more tasks or stop hear if Yes Press 1 else 2\n");
        scanf("%d", &temp);
        if (temp == 1)
        {
            printf("\n\n");
            goto method;
        }
    }
    return stackname;
}
// void reuseStack(stack stackname){
//     int shift,temp;
//     method:
//     printf("\nPlese select the Operetions to Performe\n");
//     printf(" 1.Push  \n 2.Pop \n 3.Show \n 4.Peek \n 5.Count \n 6.Isempty \n 7.IsFull \n 8.Display \n 9.Change  \n 10.Check \n 11.change by Value        : ");
//     scanf("%d");
//     switch (shift)
//     {
//     case 1:
//         if (stackname.index == stackname.num)
//         {
//             printf("Stack is filled d you want to clear the satck?\n 1. Yes \n 2.No \n");
//             scanf("%d", &shift);
//             if (shift == 1)
//                 stackname.index = -1;
//             break;
//         }
//         printf("Enter the Value you want to insert into the Stack: ");
//         scanf("%d", &shift);
//         Push(shift,stackname);
//         break;
//     case 2:
//         if (stackname.index == -1)
//         {
//             printf("Stack is empty so you need to push into stack \n Their is nothing to pop out\n");
//             break;
//         }
//         Pop(stackname);
//         break;
//     case 3:
//         printf(" Enter the place where you want to check the value of the variable\n");
//         scanf("%d", &shift);
//         show(shift,stackname);
//         break;
//     case 4:
//         Peek(stackname);
//         break;
//     case 5:
//         Count(stackname);
//         break;
//     case 6:
//         Isempty(stackname);
//         break;
//     case 7:
//         IsFull(stackname);
//         break;
//     case 8:
//         Display(stackname);
//         break;
//     case 9:
//         printf(" Enter the place and the value to be chane with in the place :");
//         scanf("%d %d", &shift, &temp);
//         Change(shift, temp,stackname);
//         break;
//     case 10:
//         printf("\nEnter the value you want to check in the stack : ");
//         scanf("%d",&shift);
//         check(shift,stackname);
//         break;
//     case 11:
//         printf("\nEnetr the previous and finall value to change");
//         scanf("%d %d",&shift, &temp);
//         changevalue(shift,temp,stackname);
//         break;
//     default:
//         printf("You have Chosses an improper option Bro\n");
//     }
//     printf("/nDo you want to performe some more tasks or stop hear if Yes Press 1 else 2\n");
//     scanf("%d",&temp);
//     if(temp==1){
//         printf("\n\n");
//         goto method;
//     }
// }
// void main(){
//     int temp;
//     int stackCount=0;
//     stack stackname[10];
//     printf("ENter\n 1.For Creating a new stack\n 2.Operating the Stack : ");
//     scanf("%d",&temp);
//     switch(temp){
//         case 1:
//         printf("Enter the no fo elements you want in Your Stack:");
//         scanf("%d",&temp);
//         stackname[stackCount]=Stack(temp);
//         stackCount++;
//         break;
//         case 2:
//         printf("\nENter the no of Stack you want to access: ");
//         scanf("%d",&temp);
//         reuseStack(stackname[temp-1]);
//     }
// }
