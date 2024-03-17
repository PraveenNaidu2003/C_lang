#include <stdio.h>
#include <stdlib.h>
struct node
{
    int cof;
    int exp;
    struct node *next;
};
typedef struct node node;
node* newnode(int a,int b,int x,node *head)
{
    node *temp,*cre=(node *)malloc(sizeof(node));
    cre->cof=a+b;
    cre->exp=x;
    temp=head;
    while(temp->next!=NULL)temp=temp->next;
    temp->next=cre;
    cre->next=NULL;
    return head;
}
int main()
{
    node *head1,*head2,*head3;
    head1=head2=head3=NULL;
    int opt,coe,exp;
    printf("\nEnter the firest expression!...");
    while(1)
    {
        rep:
        printf("\nEnter the coefficent and exponent of expression:");
        scanf("%d %d",&coe,&exp);
        printf("Enter th");
        newnode(coe,0,exp,head1);
        printf("if statement ends press 0 else presss 1");
        scanf("%d",&opt);
        if(opt==0) goto rep;
    }
}