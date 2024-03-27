#include "stdio.h"
#include "conio.h"

struct Student_s{
    char name[50];
    int roll;
    float marks;
};
void main (void)
{   
    struct Student_s newstudent;
    printf("Enter information of students\n");
    printf("Enter name: ");
    gets(newstudent.name);
    printf("Enter roll number: ");
    scanf("%d",&newstudent.roll);
    printf("Enter marks: ");
    scanf("%f",&newstudent.marks);

    printf("Displaying Information\n");
    printf("name: %s\n",newstudent.name);    
    printf("Roll: %d\n",newstudent.roll);   
    printf("Marks: %0.2f\n",newstudent.marks);   

}


