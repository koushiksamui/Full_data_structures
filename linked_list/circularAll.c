#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node * start=NULL;

struct node * create_CLl(struct node *start){
  struct node* new_node;
  struct node *ptr;
  int num;
  printf("\n Enter -1 to end");
  printf("\n Enter the data : ");
  scanf("%d",&num);
  while (num != -1)
  {
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    if (start==NULL)
    {
      new_node->next=new_node;
      start=new_node;
    }
    else{
      ptr=start;
      while (ptr->next!=start)
      {
        ptr=ptr->next;
      }
      ptr->next=new_node; 
      new_node->next=start;
      
    }
    printf("Enter the data : ");
    scanf("%d",&num);
    
  }
  return start;
}
struct node * display(struct node *start){
  struct node *ptr;
  ptr=start;
  while (ptr->next!=start)  
  {
    printf("\t %d",ptr->data);
    ptr=ptr->next;
  }
  printf("\t%d",ptr->data);
  return start;
  
}
struct node * insert_beg(struct node *start){
  struct node * ptr ,*newNode;
  int num;
  newNode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data in new node : ");
  scanf("%d",&num);
  newNode->data=num;
  ptr=start;
  while (ptr->next!=start)
  {
    ptr=ptr->next;
  }
  ptr->next=newNode;
  newNode->next=start;
  start=newNode;
  return start;
  
}
struct node * insert_end(struct node *start){
struct node *ptr,*new_node;
int num;
printf("Enter the data to tha last node : ");
scanf("%d",&num);
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
ptr=start;
while (ptr->next!=start)
{
  ptr=ptr->next;
}
ptr->next=new_node;
new_node->next=start;
return start;

}
struct node * delete_beg(struct node*start){

}
struct node* delete_end(struct node*start){

}
struct node* delete_after(struct node*start){

}
struct node* delete_list(struct node*start){

}

int main(){
  
  int option;
  do
  {
    printf("\n\n********Main Menu***********");
    printf("\n 1 : create a list");
    printf("\n 2 : Display the list");
    printf("\n 3 : Add a node at the beginning");
    printf("\n 4 : Add node at the end");
    printf("\n 5 : Delete a node from the beginning");
    printf("\n 6 : Delete a node from the end");
    printf("\n 7 : Delete a node after a given node ");
    printf("\n 8 : Delete entire list");
    printf("\n 9 : Exit");
    printf("\n\n Enter your option : ");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        start=create_CLl(start);
        printf("\nCircular linkList created");
        break;
    case 2:
        start=display(start);
        break;
    case 3:
        start=insert_beg(start);
        break;
    case 4:start=insert_end(start);
            break;
    case 5:start=delete_beg(start);
            break;
    case 6:start=delete_end(start);
            break;
    case 7:start=delete_after(start);
          break;
    case 8:start= delete_list(start);
            break;
    }
  } while (option!=9);
  


return 0;
}