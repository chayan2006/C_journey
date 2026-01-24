#include<stdio.h>

// declaration // prototype
void printhello();

int main(){
    printhello(); // function call
    return 0;
}

// function definition
void printhello(){
    printf("Hello World\n");
}
/*
Properties of functions:
- Execution always starts from main 
- A function gets called directly or indirectly from main 
- There can be multiple functionin a program
*/

/*
Function types 
1 . libarary functions : inbuilt functions in C 
   e.g. printf(), scanf(), etc.
2. User-defined functions : functions defined by the user
*/

// Passing arguments to functions:  function can take  value (parameter)& give some value (return value)
// void function : function that does not return any value, eg  void printhello()
// int function : function that returns an integer value, eg int sum(inta, int b);
