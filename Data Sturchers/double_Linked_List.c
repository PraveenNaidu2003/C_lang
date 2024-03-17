#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;   
    struct node *left;
    struct node *right;
};
struct node *head;
void Ins_beg()
{
    int value;
    struct node *beg=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to insert at begining:");
    scanf("%d",&value);
    beg->data=value;
    if(head==NULL)
    {
        head=beg;
        beg->left=NULL;
        beg->right=NULL;
    }
    else
    {
        beg->right=head;
        head=beg;
        beg->left=NULL;
    }
}
void Ins_Last()
{
    int value;
    printf("Enter the value to insert at last:");
    scanf("%d",&value);
    struct node *use,*last=(struct node *)malloc(sizeof(struct node ));
    last->right=NULL;
    last->data=value;
    use=head;
    if(head==NULL) 
    {
        head=last;
        last->left=NULL;
    }
    else
    {
        while(use->right!=NULL)
        {use=use->right;}
        last->left=use;
        use->right=last;
    }
}
void Ins_rand()
{
    int value;
    struct node *use,*rand=(struct node *)malloc(sizeof(struct node ));
    use=head;
    printf("\nEnter the value whom after you want to insert:");
    scanf("%d",&value);
    while(use->data!=value) use=use->right;
    rand->left=use;
    rand->right=use->right;
    if(use->right!=NULL) use->right->left=use;
   if(use!=NULL) use->right=rand;
    printf("Enter the value that you want insert after %d  is:",value);
    scanf("%d",&rand->data);
}
void delBeg()
{
    struct node *del;
    if(head==NULL) 
    {
        printf("\n....Linked List is Empty!....");
        return;
    }
    else
    {
        del=head;
        head=del->right;
        head->left=NULL;
        free(del);
    }    
}
void delLast()
{
    struct node *last;
    last=head;
    if(head==NULL)
    {
        printf("\n...Linked List is empty!...");
        return;
    }
    else
    {
        while(last->right!=NULL) {last=last->right;}
        last->left->right=NULL;
        printf("5");
        free(last);
    }
}
void delRand()
{
    int value;
    printf("\nEnter the value which you want to delect:");
    scanf("%d",&value);
    struct node *use,*ues;
    use=head;
    while(use->data!=value) use=use->right;
    ues=use->left;//use->left->right=use->right;
    ues->right=use->right;
    ues=use->right;//use->right->left=use->left;
    ues->left=use->left;
}
struct node* Search()
{
    int value;
    printf("\nEnter the value to Search in the linked list:");
    scanf("%d",&value);
    struct node *use=head;
    while(use->data!=value) {use=use->right;}
    if(use==NULL) printf("\nThe value %d is mot found in the Linked List!..",value);
    else printf("The value %d is found after %d at the location of %ld",value,use->left->data,use);
    return use;
}
void Display()
{
    struct node *use=head;
    if(use==NULL) {printf("Linked list is empty:"); return;}
    while(use!=NULL)
    {
        printf("%d\t",use->data);
        use=use->right;
    }
}
int main()
{
    int opt;
    while(1)
    {
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1. Insert in begining\n2. Insert at last\n3. Insert at any random location\n4. Delete from Beginning\n5. Delete from last\n6. Delete the node after the given data\n7. Search\n8. Show\n9. Exit\n");  
        printf("\nEnter your choice:");  
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            Ins_beg();
            break;
            case 2:
            Ins_Last();
            break;
            case 3:
            Ins_rand();
            break;
            case 4:
            delBeg();
            break;
            case 5:
            delLast();
            break;
            case 6:
            delRand();
            break;
            case 7:
            Search();
            break;
            case 8:
            Display();
            break;
            case 9:
            exit(0);
            default:printf("\n...!WRONG INPUT!....\n");
        }
    }
    printf("\n");
    return 0;
}