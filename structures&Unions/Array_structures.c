#include<stdio.h>
int main() {
    struct student{
        int roll_no;
        char name[80];
        int fees;
        char DOB[80];
    };
    struct student stud[50];
    int n,i,num,new_rollno;
    int new_fees;
    char new_name[80];
    char new_DOB[80];
    printf("Enter the no of student: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the roll no : ");
        scanf("%d",&stud[i].roll_no);

        printf("\nEnter the name : ");
        gets(stud[i].name);

        printf("\nEnter the fees : ");
        scanf("%d",&stud[i].fees);

        printf("\nEnter the date of barth : ");
        gets(stud[i].DOB);

    }

    for ( i = 0; i < n; i++)
    {
        printf("\n**************Display the stdent details %d**************",i+1);
        printf("\n Roll number of the student =%d ",stud[i].roll_no);
        printf("\n Name  of  the student =%s ",stud[i].name);
        printf("\n fees of the student = %d ",stud[i].fees);
        printf("\n Date of barth of the student =%s ",stud[i].DOB);
    }
    
    return 0;
}