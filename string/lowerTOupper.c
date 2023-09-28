#include<stdio.h>
int main(){
    char str[100],str_upper[100];
    int i=0;
    printf("Enter the String : ");
    gets  (str);
    while (str[i]!='\0')
    {
        if (str[i]>='a' && str[i]<='z')
        {                                                                       
            str_upper[i]=str[i]-32;

        }
        else 
            str_upper[i]=str[i];
        
        i++;
        
    }
    str_upper[i]='\0';
    printf("The String converted into upert case is : ");
    puts(str_upper);
    return 0;
    
}