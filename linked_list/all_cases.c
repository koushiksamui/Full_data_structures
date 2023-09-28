#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linklistTraversal(struct node * ptr){
    while (ptr!=NULL)
    {
        
        printf("%d\n",(*ptr).data);
        // printf("%d\n",ptr->next);
        ptr=(*ptr).next;

    }
    printf("\n");
}

// first case-------------------------Insert first-------------------------------------------------

struct node * insertFirst(struct node * ptr,int value){
    struct node * ptr1 = (struct node *)malloc(sizeof(struct node));
    (*ptr1).data=value;
    (*ptr1).next=ptr;
    return ptr1;
}

// second case---------------------Insert after given index-----------------------------------------------------

struct node * insertAtIndex(struct node * head, int value,int index){
    struct node * ptr=(struct node *)malloc (sizeof(struct node));
    ptr->data=value;
    struct node * p= head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}
// third case--------------------Insert at end------------------------------------------------------------

struct node * insetAtEnd(struct node * head,int value){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=value;
    struct node * p=head;

    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
    
}

// fourth case---------Insert After given Node------------------------------------------------------
struct node * insertAfterNode(struct node * head, struct node * node,int value){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=value;

    ptr->next=node->next;
    node->next=ptr;

    return head;
}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    (*head).data=7;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=20;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

  


    printf("After insertion linklist values are : \n");
    linklistTraversal(head);
    // head = insertFirst(head,12);
    // head=insertAtIndex(head,22,3);
    // head = insetAtEnd(head,23);
    head= insertAfterNode(head,second,99);
    linklistTraversal(head);


return 0;
}