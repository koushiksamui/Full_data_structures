#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node * linkedlistTraversal(struct node* head){
    struct node* ptr;
    ptr=head;
    do
    {
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
    return 0;
}

int main(){
    struct node* head=(struct node *)malloc(sizeof(struct node));
    struct node* second=(struct node *)malloc(sizeof(struct node));
    struct node* third=(struct node *)malloc(sizeof(struct node));
    struct node* fourth=(struct node *)malloc(sizeof(struct node));

    head->data=50;
    head->next=second;

    second->data=44;
    second->next=third;

    third->data=22;
    third->next=fourth;

    fourth->data=67;
    fourth->next=head;

    linkedlistTraversal(head);


return 0;
}