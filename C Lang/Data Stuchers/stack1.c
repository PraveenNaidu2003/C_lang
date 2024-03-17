// Stack Programe First is Last Out form or Last in First Out Form
#include <stdio.h>
int Stack[10], index = -1;
void Push(int var)
{
    index++;
    Stack[index] = var;
}
void Pop()
{
    printf("The top Most Element of the Stack is %d \n", Stack[index]);
    index--;
}
void Display()
{
    int temp = index;
    for (int i = temp; i >= 0; i--)
        printf("%d \t", Stack[i]);
}
void check(int value){
    for (int i= 0;i<10;i++){
        if(Stack[i]==value){
            printf("The vale is in the stack at %d place",i+1);
        }
    }
}
void show(int place)
{
    printf("%d", Stack[place - 1]);
}
void Peek()
{
    printf("%d \n", Stack[index]);
}
int Count()
{
    printf("%d", index+1);
    return index + 1;
}
void Isempty()
{
    if (index == -1)
        printf("Yes this Stack Is empty\n");
    else
        printf("No This stack is Not Empty\n");
}
void IsFull()
{
    if (index == 9)
        printf("Yes this Stack Is Filled\n");
    else
        printf("No This stack is Not Fulled\n");
}
void Change(int place, int value)
{
    int temp = 0;
    printf("Do you want to Change %d to %d \n 1.Yes 2.No \n", Stack[place - 1], value);
    scanf("%d", &temp);
    if (temp == 1)
        Stack[place - 1] = value; 
    else
        printf("Operation Cancelled Bro\n");
}
void changevalue(int previous, int value){
    for(int i=0;i<10;i++){
        if(Stack[i]==previous){
            Stack[i]=value;
        }
    }
}
void main()
{
    int shift, temp;
    method:
    printf("\nPlese select the Operetions to Performe\n");
    printf(" 1.Push  \n 2.Pop \n 3.Show \n 4.Peek \n 5.Count \n 6.Isempty \n 7.IsFull \n 8.Display \n 9.Change  \n 10.Check \n 11.change by Value        : ");
    scanf("%d", &shift);
    switch (shift)
    {
    case 1:
        if (index == 9)
        {
            printf("Stack is filled d you want to clear the satck?\n 1. Yes \n 2.No \n");
            scanf("%d", &shift);
            if (shift == 1)
                index = -1;
            break;
        }
        printf("Enter the Value you want to insert into the Stack: ");
        scanf("%d", &shift);
        Push(shift);
        break;
    case 2:
        if (index == -1)
        {
            printf("Stack is empty so you need to push into stack \n Their is nothing to pop out\n");
            break;
        }
        Pop();
        break;
    case 3:
        printf(" Enter the place where you want to check the value of the variable\n");
        scanf("%d", &shift);
        show(shift);
        break;
    case 4:
        Peek();
        break;
    case 5:
        Count();
        break;
    case 6:
        Isempty();
        break;
    case 7:
        IsFull();
        break;
    case 8:
        Display();
        break;
    case 9:
        printf(" Enter the place and the value to be chane with in the place :");
        scanf("%d %d", &shift, &temp);
        Change(shift, temp);
        break;
    case 10: 
        printf("\nEnter the value you want to check in the stack : ");
        scanf("%d",&shift);
        check(shift);
        break;
    case 11:
        printf("\nEnetr the previous and finall value to change");
        scanf("%d %d",&shift, &temp);
        changevalue(shift,temp);
        break;
    default:
        printf("You have Chosses an improper option Bro\n");
    }
    // printf("/nDo you want to performe some more tasks or stop hear if No Press 1 else 2\n");
    // scanf("%d",&temp);
    // if(temp!=1) 
    printf("\n\n");
    goto method;
}