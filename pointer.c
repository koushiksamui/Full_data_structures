#include<stdio.h>
int main(){
    int a;
    int * b;
    a=20;
    b=&a;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",b);
    printf("%d",*b);

}