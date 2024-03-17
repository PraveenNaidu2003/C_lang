#include <stdio.h>
#include<stdlib.h>
#define max 10
typedef struct quee
{
    int top;
    int rare;
    char name[max][20];
}quee;
quee name;
void Push()
{
    if(name.top==max-1){printf("\nQuee is filled!..No space to enter the data!.....");return;}
    name.top++;
    printf("Enter the string you want to enter:");
    scanf("%s",name.name[name.top]);
    printf("Data was entered succesfully!......");
}
void Pop()
{
    if(name.rare>=name.top){printf("name Quee is empty!....."); return;}
    name.rare++;
    printf("%s\t",name.name[name.rare]);
}
void Display()
{
    if(name.rare>=name.top){printf("name Quee is empty!....."); return;}
    int temp=name.rare;
    while(temp<name.top)
    {
        temp++;
        printf("%s\t",name.name[temp]);
    }    
}
void IQepty()
{
    if(name.rare>=name.top)printf("\nyes Name Quee is empty nothing to print");
    else printf("\nName quee is not empty!....");
}
void Peek()
{
    if(name.rare>=name.top)printf("\nyes Name Quee is empty nothing to print");
    else printf("the top lastle entered element is : %s",name.name[name.rare+1]);
}
int main()
{
    int opt;
    name.rare=-1;
    name.top=-1;
    while(1)
    {
        printf("\n\n.....MENU!......\n1.Push\n2.Pop\n3.Display\n4.Is stack Empty\n5.Peek\n6.Exit");
        printf("\nplese select the option from the list:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            Push();
            break;
            case 2:
            Pop();
            break;
            case 3:
            Display();
            break;
            case 4:
            IQepty();
            break;
            case 5:
            Peek();
            break;;
            case 6:
            exit(0);
            default :printf("Wrong input!....");
        }
    }
    return 0;
}