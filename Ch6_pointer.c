#include <stdio.h>
// Pointers 
// A variable that stores the memory address of another variable is called pointer variable.

/*
Syntax to declare pointer variable:
data_type *pointer_variable_name;
Example:
int age = 22;
int *ptr = &age;// p is a pointer to an integer variable  , (* = value at address) ($ = addres of )
int_age = *ptr; // value at address stored in ptr
*/
int main (){
    int age = 22 ;
    int *ptr = &age; // pointer variable
    int _age = *ptr; // dereferencing pointer to get value
    // adress 
    printf("%p\n",&age);
    printf("%u\n",&age);
    // pointer to pointer\
    syntax:
    // data_type **pointer_to_pointer_variable_name;
   int  i = 5 ;
   int *ptr  = &i ;
   int **pptr = &ptr;

   printf("%d\n",**pptr);
} 

// Pointer in Function Call
/*
function  are twon type ;
Call by Value = We pass value of variable as argument 
Call by Reference = We pass address of variable as argument
*/
