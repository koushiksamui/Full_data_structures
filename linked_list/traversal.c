#include<stdio.h>
#include<malloc.h>
struct node {
    int data;
    struct node *next;
};

void travars(struct node *ptr){
  while (ptr!=NULL)
  {
    printf("%d\n",ptr->data);
    ptr= ptr->next;
  }
  
}
int main(){
  struct node *head;
  struct node *first;
  struct node *second;
  struct node *third;

  head = (struct node *)malloc(sizeof(struct node));
  first = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));


  (*head).data=222;
  (*head).next=first;

  first->data=333;
  first->next=second;

  second->data=444;
  second->next=third;

  third->data=666;
  third->next=NULL;

  
  travars(head);
  return 0;
}