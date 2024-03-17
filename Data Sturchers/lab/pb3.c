// Write a program to implement the operations on circular queues
#include <stdio.h>
#include <stdlib.h>
const int max;
int top=-1,bot=0;
void Enque(int *arr)
{
    if(top==max-1){printf("Quee is Full!.."); return;}
    top++;
    printf("\nEnter the value to Enque:");
    scanf("%d",&arr[top]);
}
void Deque(int *arr)
{
    if(bot>top){printf("\nQuee is empty not data to Display!...."); return;}
    printf("The last most element is :%d",arr[bot]);
    bot++;
}
void Display(int *arr)
{
    int i;
    if(bot>top){printf("\nQuee is empty not data to Display!...."); return;}
    for(i=bot;i<=top;i++)printf("%d\t",arr[i]);
}
void Check(int *arr)
{
    if(bot>top){printf("\nYes!.... Quee is empty not data to Display!...."); return;}
    printf("\nNo!.... Quee is not empty.The Buttom most element is %d",arr[bot]);
}
void peek(int *arr)
{
    if(bot>top){printf("\nQuee is empty.No Buttom most element is avalible"); return;}
    printf("\nThe Buttom most element is %d",arr[bot]);
}
int main()
{
    printf("Enter the maximum length of the quee:");
    scanf("%d",&max);
    int quee[max],opt;
    while(1)
    {
        printf("\n\n.....MENU!......\n1.Enque\n2.Deque\n3.Display\n4.Is quee Empty\n5.Peek\n6.Exit");
        printf("\nplese select the option from the list:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            Enque(quee);
            break;
            case 2:
            Deque(quee);
            break;
            case 3:
            Display(quee);
            break;
            case 4:
            Check(quee);
            break;
            case 5:
            peek(quee);
            break;
            case 6:
            exit(0);
            default:printf("\nworong input!..");
        }
    }
    return 0;
}