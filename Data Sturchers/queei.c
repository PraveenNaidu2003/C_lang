#include <stdio.h>
#include <stdlib.h>
const int max;
int top=-1;
void Push(int *arr)
{
    if(top==max-1){printf("\nstack is Full!...");return;}
    top++;
    printf("\nenter the value you want to insert:");
    scanf("%d",&arr[top]);
}
void Pop(int *arr)
{
    if(top==-1){printf("\nStack is empty! Nothing to print.....");return;}
    printf("%d\t",arr[top]);
    top--;
}
void Display(int *arr)
{
    if(top==-1){printf("\nStack is empty! Nothing to print.....");return;}
    int n=top;
    while(n!=-1) {printf("%d\t",arr[n]); n--;}
}
void Check(int *arr)
{
    if(top==-1) printf("\nyes stack is empty!...");
    else {printf("\nstack is not empty!..");
          printf("\nStack consists of:");
          Display(arr);}
}
void Peek(int *arr)
{
    if(top==-1){printf("\nStack is empty! Nothing to print.....");return;}
    printf("The peek element is %d",arr[top]);
}
int main()
{
    int opt;
    printf("Enter the maximum size of the stack:");
    scanf("%d",&max);
    int stack[max];
    while(1){printf("\n\n.....MENU!......\n1.Push\n2.Pop\n3.Display\n4.Is stack Empty\n5.Peek\n6.Exit");
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
        Check(stack);
        break;
        case 5:
        Peek(stack);
        break;
        case 6:
        exit(0);
        default:printf("\nwrong input!....");
    }
    }
}