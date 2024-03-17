#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL;
void InsBeg()
{
    node *cre=(node *)malloc(sizeof(node));
    printf("\nEnter the value to insert:");
    scanf("%d",&cre->data);
    cre->next=head;
    head=cre;
}
void InsLas()
{
    node *temp,*cre=(node *)malloc(sizeof(node));
    printf("\nEnter the value to insert at last:");
    scanf("%d",cre->data);
    cre->next=NULL;
    temp=head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=cre;
}
void InsRad()
{
    int ser;
    node *temp=head,*cre=(node *)malloc(sizeof(node));
    printf("\nEnter the value which after you want to insert:");
    scanf("%d",&ser);
    while(temp->data!=ser&&temp!=NULL) temp=temp->next;
    if(temp==NULL) printf("\nThe value you entered %d is not found!..",ser);
    else{
    printf("\nEnter the value you want to insert after %d is:",ser);
    scanf("%d",cre->data);
    cre->next=temp->next;
    temp->next=cre;}
}
void DelBeg()
{
    if(head==NULL){printf("\nLinked List is Empty!...."); return;}
    node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void DelLas()
{
    if(head==NULL){printf("\nLinked List is Empty!...."); return;}
    node *cea,*temp=head;
    while(temp->next!=NULL) {cea=temp; temp=temp->next;}
    cea->next=NULL;
    free(temp);
}
void DelRad()
{
    if(head==NULL){printf("\nLinked List is Empty!...."); return;}
    int ser;
    node *cle,*temp=head;
    printf("\nEnter the value which after you want to Delect:");
    scanf("%d",&ser);
    while(temp->data!=ser&&temp!=NULL) temp=temp->next;
    if(temp==NULL) printf("\nThe value you entered %d is not found!..",ser);
    else
    {
        cle=temp->next;
        temp->next=cle->next;
        free(cle);
    }
}
void Search()
{
    node *temp=head;
    int ser;
    printf("\nEnter the value which after you want to Delect:");
    scanf("%d",&ser);
    while(temp->data!=ser&&temp!=NULL) temp=temp->next;
    if(temp==NULL) printf("\nThe value you entered %d is not found!..",ser);
    else printf("\nThe data %d is before %d",ser,temp->next->data);
}
void Display()
{
    node *temp=head;
    if(temp==NULL) printf("\nLinked List is empty!....");
    else{
    while(temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }}
}
int main()
{
    int opt;
    while(1)
    {
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n");
        printf("5.Delete from last\n6.Delete node after specified value\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            InsBeg();
            break;
            case 2:
            InsLas();
            break;
            case 3:
            InsRad();
            break;
            case 4:
            DelBeg();
            break;
            case 5:
            DelLas();
            break;
            case 6:
            DelRad();
            break;
            case 7:
            Search();
            break;
            case 8:
            Display();
            break;
            case 9:
            exit(0);
            default:printf("\n..Wrong Input!....");
        }
    }
    return 0;
}