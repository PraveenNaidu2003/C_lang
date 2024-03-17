// Stack Programe First is Last Out form or Last in First Out Form
#include <stdio.h>
int Stack[10], index = 0;
void Push(int var)
{
    Stack[index] = var;
    index++;
}
void Pop()
{
    index--;
    printf("The top Most Element of the Stack is %d", Stack[index]);
}
void Display()
{
    int temp = index;
    for (int i = temp; i >= 0; i--)
        printf("%d \t", Stack[i]);
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
    printf("%d", index);
    return index + 1;
}
void Isempty()
{
    if (index == 0)
        printf("Yes this Stack Is empty");
    else
        printf("No This stack is Not Empty");
}
void IsFull()
{
    if (index == 9)
        printf("Yes this Stack Is Filled");
    else
        printf("No This stack is Not Fulled");
}
void Change(int place, int value)
{
    int temp = 0;
    printf("Do you want to Change %d to %d \n 1.Yes 2.No", Stack[place - 1], value);
    scanf("%d", &temp);
    if (temp == 1)
        Stack[place - 1] = value;
    else
        printf("Operation Cancled Bro");
}

void main()
{
    int shift, temp;
    method:
    printf("\nPlese select the Operetions to Performe\n");
    printf(" 1.Push  \n 2.Pop \n 3. Show \n 4. Peek \n 5. Count \n 6.Isempty \n 7.IsFull \n 8.Display \n 9. Change ");
    scanf("%d", &shift);
    switch (shift)
    {
    case 1:
        if (index == 9)
        {
            printf("Stack is filled d you want to clear the satck?\n 1. Yes \n 2.No");
            scanf("%d", &shift);
            if (shift == 1)
                index = 0;
            break;
        }
        printf("Enter the Value you want to insert into the Stack: ");
        scanf("%d", &shift);
        Push(shift);
        break;
    case 2:
        if (index == 0)
        {
            printf("Stack is empty so you need to push into stack \n Their is nothing to pop out");
            break;
        }
        Pop();
        break;
    case 3:
        printf(" Enter the place where you want to check the value of the variable");
        scanf("%d", &shift);
        show(shift);
        break;
    case 4:
        Peek();
        break;
    case 5:
        shift = Count();
        printf("%d\n", shift);
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
        printf(" enter the place and the value to be chane with in the place");
        scanf("%d %d", &shift, &temp);
        Change(shift, temp);
        break;
    default:
        printf("You have Chosses an improper option Bro");
    }
    // printf("/nDo you want to performe some more tasks or stop hear if No Press 1 else 2\n");
    // scanf("%d",&temp);
    // if(temp!=1) 
    printf("\n\n\n");
    goto method;
}