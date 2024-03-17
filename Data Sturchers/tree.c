#include <stdio.h>
#include <stdlib.h>
struct branch
{
    int data;
    struct branch *left,*right;
};
struct branch * Ins_Left(struct branch *root)
{
    struct branch *node=(struct branch *)malloc(sizeof(struct branch));
    root->left=node;
    printf("Enter the value that you want to enter into Left part of the selected node:");
    scanf("%d",&node->data);
    node->left=NULL;
    node->right=NULL;
    return node;
}
struct branch * Ins_Right(struct branch *root)
{
    struct branch *node=(struct branch *)malloc(sizeof(struct branch));
    root->right=node;
    printf("Enter the value that you want to enter into Right part of the selected node:");
    scanf("%d",&node->data);
    node->left=NULL;
    node->right=NULL;
    return node;
}
void Display_Froot(struct branch *root)
{    
    printf("%d",root->data);
    if(root->left!=NULL)
    Display_Froot(root->left);
    else if(root->right!=NULL)
    Display_Froot(root->right);
    else if(root->left==NULL)
    Display_Froot(root->right);
    else
    Display_Froot(root->left);
}
int main()
{
    int opt,value;
    printf("Enter the value that you want to insert in root node:");
    scanf("%d",&value);
    struct branch *roat,*raat,*raot,*root=(struct branch *)malloc(sizeof(struct branch));
    raot=roat=root;
    root->data=value;
    root->left=NULL;
    root->right=NULL;

    mainMenu:
    printf("\n.....MainMenu......!\n1. Insert at Left\n2. Insert at Right\n3.Display\n4.Exit\n");
    printf("Plese select the option:");
    scanf("%d",&opt);  
    if (opt==1)
    {
        struct branch *node=(struct branch *)malloc(sizeof(struct branch));
        root->right=node;
        printf("Enter the value that you want to enter into Right part of the selected node:");     
        scanf("%d",&node->data);
        node->left=NULL;
        node->right=NULL;        
    }
    else 
    {
        struct branch *node=(struct branch *)malloc(sizeof(struct branch));
        root->right=node;
        printf("Enter the value that you want to enter into Right part of the selected node:");
        scanf("%d",&node->data);
        node->left=NULL;
        node->right=NULL;
        return node;
    }
    
    while (1)
    {
        switch(opt)
        {
            case 1:
            raot=roat;
            roat=Ins_Left(roat);            
            break;
            case 2:
            raot=roat;
            raot=Ins_Right(raot);
            break;
            case 3:
            Display_Froot(root);
            break;
            case 4:
            exit(0);
            default:printf("..!WRONG INPUT!...\n");
        }
        goto mainMenu;
    }
    return 0;
}