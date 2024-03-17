#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL;
void insertatbeg(int data){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}
void insertatlast(int data){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void insertatpos(int data, int pos){
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    if(pos == 1){
        newnode->next = head;
        head = newnode;
    }
    else{
        node *temp = head;
        for(int i=1; i<pos-1; i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
