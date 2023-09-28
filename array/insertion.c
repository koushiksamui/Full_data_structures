#include<stdio.h>
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
}

int indinsertion(int arr[],int pos, int element,int size,int capasity){
    if (size>=capasity)
    {
        return -1;
    }
    for (int i = size-1; i >=pos ; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[pos]=element;
    return 1;
    
    
}
int main(){
    int arr[100]={2,23,3,34,5};
    int size=5,element,pos ,capasity;
    display(arr,size);
    printf("Enter the number to be inserted : ");
    scanf("%d",&element);
    printf("Enter the position at whitch the number to be added : ");
    scanf("%d",&pos);
    indinsertion(arr,pos,element,size,capasity=100);
    size +=1;
    display(arr,size);

}