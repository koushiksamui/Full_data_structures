#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

struct node *linkedlistTraversal(struct node * head){
    while (head != NULL)
    {
        printf("element: %d\n",head->data);
        head=head->next;
    }
    printf("\n");
}
// First case-------------delete first node----------------------------------

struct node *deleteFirstnode(struct node * head){
    struct node * ptr=head;
    head=ptr->next;
    free(ptr);
    return head;

}
//second case------------delete given index-----------------------------------

struct node * deleteAtIndex(struct node* head, int index){
    struct node * p=head;
    struct node* q;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=q->next;
    free(q);
    return head;
    
}
//third case------------delete at end-----------------------------------------

struct node * deleteEnd(struct node * head){
    struct node * p=head;
    struct node * q=head->next;
    while (q->next!=NULL)
    {
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);

    return head;
    
}
// fourth case-----------delete given value--------------------------------------

struct node * deleteGivenValue(struct node * head,int value){
    
    struct node* p=head;
    struct node*q=head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
   if (q->data==value)
   {
     p->next=q->next;
    free(q);
   }
    return head;
    
}
int main(){
    struct node * head=(struct node *)malloc (sizeof(struct node));
    struct node * second=(struct node *)malloc (sizeof(struct node));
    struct node * third=(struct node *)malloc (sizeof(struct node));
    struct node * fourth=(struct node *)malloc (sizeof(struct node));

    head->data=20;
    head->next=second;

    second->data=30;
    second->next=third;

    third->data=50;
    third->next=fourth;

    fourth->data=55;
    fourth->next=NULL;


    linkedlistTraversal(head);

    // head= deleteFirstnode(head);
    // head = deleteAtIndex(head,2);
    // head = deleteEnd(head);
    head = deleteGivenValue(head,50);

    printf("After deletion :\n");
    linkedlistTraversal(head);

}