#include<stdio.h>
int main(){
    char str[100],i=0,length;
    printf("\n Enter the String: ");
    // scanf("%s",&str);
    gets(str);
    while (str[i] !='\0')
        i++;
    length=i;
    printf("\n the length of the string is : %d",length);
    return 0;
    
}