#include<stdio.h>
#include<stdlib.h>
const int num;
typedef struct node
{
    int coe;
    int exp;
    struct node *addr;
}node;
node *head[10];
void term(int i)
{
    node *temp=(node *)(malloc(sizeof(node)));
    printf("\nEnter the coefficent of the term:");
    scanf("%d",temp->coe);
    printf("Enter th exponent of the term:");
    scanf("%d",temp->coe);
    temp->addr=NULL; 
    if(head[i]==NULL) head[i]=temp;
    else 
    {
        node *chk;
        chk=head[i];
        while(chk->addr!=NULL)chk=chk->addr;
        chk->addr=temp;        
    }
}
void poly(int i)
{
    term(i);
    while(1)
    {
        int hi;
        printf("Enter '1' to add anothr term:");
        scanf("%d",&hi);
        if(hi==1)term(i);
        else return;
    }
}
int main()
{
    int i;
    printf("Enter total number of polynomials:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("\nEnter the details of polynomial %d:\n\n",i+1);
        head[i]=NULL;
        poly(i);
    }
}