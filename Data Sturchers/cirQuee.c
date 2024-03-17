#include <stdio.h>
#include <stdlib.h>
#define max 5
int top=-1,rar=0,que[max];
void add()
{
    int i=0;
    if(top!=max-1)
    {
        top++;
        printf("\nEnter the element to insert:");
        scanf("%d",&que[top]);
    }
    else if(i!=rar)
    {
        printf("\nEnter the element to insert:");
        scanf("%d",&que[i]);
        i++;
    }
    else printf("\nQuee is full");
}
void del()
{
    if(rar==max-1) printf("stack is full");
    else 
    {
        printf("deleted element is %d",que[rar]);
        rar++;
    }
    if(rar==top) rar=0;
}
void display()
{
    int i;
    for(i=rar;i<=top;i++) printf("%d\t",que[i]);
}
int main()
{
    int opt;
    while(1)
    {
        printf("\n\n.....MENU!......\n1.addQuee\n2.Delect Quee\n3.Displa\n4.exit");
        printf("\nplese select the option from the list:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            add();
            break;
            case 2:
            del();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:printf("\n....!Wrong INPUT!...\n");
        }
    }
}