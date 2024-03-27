#include "stdio.h"
#include "conio.h"

struct Student_s{
    char name[10];
    int roll;
    float marks;
};
void main (void)
{   
    struct Student_s newstudent[10];
    int i=0,num_of_students=10;

    printf("Enter information of students\n");
    for(i=0;i<num_of_students;i++)
    {
    newstudent[i].roll=i+1;
    printf("For roll number %d\n",newstudent[i].roll);
    printf("Enter name: ");
    scanf("%s",newstudent[i].name);
    printf("Enter marks: ");
    scanf("%f",&newstudent[i].marks);
    }
    printf("Displaying Information of students\n");
        for(i=0;i<num_of_students;i++)
    {
    printf("Information of roll number: %d\n",newstudent[i].roll);    
    printf("Name: %s\n",newstudent[i].name); 
    printf("Marks: %.2f\n",newstudent[i].marks);   
    }

}


