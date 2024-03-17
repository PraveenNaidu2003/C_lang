#include <stdio.h>
#include <stdlib.h>
int rare=0,top=-1;
const int max;
void Enque(int *arr)
{
    if(top==max-1){printf("\nQuee is Full!...");return;}
    top++;
    printf("\nenter the value you want to insert:");
    scanf("%d",&arr[top]);
}
void Deque(int *arr)
{
    if(rare==top+1)printf("\nStack is empty! Nothing to print.....");
    else {printf("%d\t",arr[rare]);
          rare++;}
}
void Display(int *arr)
{
    if(rare==top+1){printf("\nStack is empty! Nothing to print.....");return;}
    int n=rare;
    while(n!=top+1) {printf("%d\t",arr[n]); n++;}
}
void Check(int *arr)
{
    if(rare==top+1)printf("Quee is Empty!...");
    else printf("\nQuee is not empty\n");
    printf("\nQuee consists of");
    Display(arr);
}
void peek(int *arr)
{
    if(top==-1||rare==top+1) printf("Quee is empty!..");
    else printf("%d\t",arr[top]);
}
int main()
{
    int opt;
    printf("Enter the maximum size of the Quee:");
    scanf("%d",&max);
    int quee[max];
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