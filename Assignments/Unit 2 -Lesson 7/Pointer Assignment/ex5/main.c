#include "stdio.h"



 typedef struct {
    char Name[50];
    int ID;
}employee;

int main (void)
{
employee emp1={"Mostafa",1001},emp2={"Saleh",1002},emp3={"Selim",1003};
employee *arr_ptr[3]={&emp1,&emp2,&emp3};
employee *(*ptr)[3]=&arr_ptr;
//Using Struct.
printf("######### Using struct #########\n");
printf("the name is %s and the ID = %d  \n",emp1.Name,emp1.ID);
printf("the name is %s and the ID = %d  \n",emp2.Name,emp2.ID);
printf("the name is %s and the ID = %d  \n",emp3.Name,emp3.ID);
printf("\n");
//Using Array of pointer to struct
printf("######### Using Array of pointer to struct #########\n");
printf("the name is %s and the ID = %d  \n",arr_ptr[0]->Name,arr_ptr[0]->ID);
printf("the name is %s and the ID = %d  \n",arr_ptr[1]->Name,arr_ptr[1]->ID);
printf("the name is %s and the ID = %d  \n",arr_ptr[2]->Name,arr_ptr[2]->ID);
printf("\n");
//Using Pointer to array of pointer to struct (Using ->)
printf("######### Using Pointer to array of pointer to struct (Using ->) #########\n");
printf("the name is %s and the ID = %d  \n",(*(*ptr+0))->Name,(*(*ptr+0))->ID);
printf("the name is %s and the ID = %d  \n",(*(*ptr+1))->Name,(*(*ptr+1))->ID);
printf("the name is %s and the ID = %d  \n",(*(*ptr+2))->Name,(*(*ptr+2))->ID);
printf("\n");
//Using Pointer to array of pointer to struct (Using .)
printf("######### Using Pointer to array of pointer to struct (Using .) #########\n");
printf("the name is %s and the ID = %d  \n",(**(*ptr+0)).Name,(**(*ptr+0)).ID);
printf("the name is %s and the ID = %d  \n",(**(*ptr+1)).Name,(**(*ptr+1)).ID);
printf("the name is %s and the ID = %d  \n",(**(*ptr+2)).Name,(**(*ptr+2)).ID);

return 0;
}