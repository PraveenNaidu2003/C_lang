#include <stdio.h>
#include <stdlib.h>
struct branch
{
    int data;
    struct branch *left;
    struct branch *right;
};
struct branch * Insert(struct branch * root,int value)
{
    struct branch *node=(struct branch *)malloc(sizeof(struct branch));
    node->data=value;
    node->left=NULL;
    node->right=NULL;
    return node;         
}
int main()
{
    int opt,value;
    printf("enter the root branch data:\n");
    scanf("%d",&value);
    struct branch *root=(struct branch *)malloc(sizeof(struct branch));
    root->data=value;
    struct branch *Left,*Rigth;
    Left=Rigth=root;
    printf("...MAIN MENU!..\n1.Insert\n2.Search\n3.Exit\nSelect an option:");
    scanf("%d",&opt);
    while(opt!=3)
    {
        switch (opt)
        {
        case 1:
        printf("Enter the value to Insert:");
        scanf("%d",value);
        if(value>=root->data)
            Left=Insert(Left,value);
        else
            Rigth=Insert(Rigth,value);
        break;
        case 2:
            Search();
            break;
        case 3:
            exit(0);  
        default:printf("\n..!worng input!...\n");            
        } 
        printf("...MAIN MENU!..\n1.Insert\n2.Search\n3.Exit\nSelect an option:");
        scanf("%d",&opt);
    }
}