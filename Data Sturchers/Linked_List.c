#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void Ins_beg()  
{
    int val;
    struct node *nextNode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to be inserted:");
    scanf("%d",&val);
    nextNode->data=val;
    if(head==NULL) head=nextNode;
    else 
    {
        nextNode->next=head;
        head=nextNode;
    }
}
void Ins_last()
{
    int val;
    struct node *nextNode=(struct node *)malloc(sizeof(struct node));
    struct node *use=head;
    while(use !=NULL)
    use=use->next;
    printf("\nenter the value that you want to insert in the last node:");
    scanf("%d",&val);
    nextNode->data=val;
    nextNode->next=NULL;
    use->next=nextNode;   
}
void Ins_rand()
{
    int after;
    printf("\nEnter the element which after you want to insert:");
    scanf("%d",&after);
    struct node *use,*pre,*nextNode=(struct node *)malloc(sizeof(struct node));
    use=head;
    while(use->data !=after) use=use->next;
    pre=use->next;
    printf("\nEnter the element that you want to insert after %d is :",after);
    scanf("%d",&after);
    nextNode->data=after;
    nextNode->next=use->next;
    pre->next=nextNode;
}
void Del_beg()
{
    struct node *use;
    use=head;
    head=head->next;
    free(use);    
}
void Del_end()
{
    
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
        printf("5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            Ins_beg();
            break;
            case 2:
            Ins_last();
            break;
            case 3:
            Ins_rand();
            break;
            case 4:
            Del_beg();
            case 5:
            
        }
    }
    return 0;
}