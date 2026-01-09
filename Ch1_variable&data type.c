#include <stdio.h> // preprocessor directive to include standard input output header file
// Variables is the name of a memory location which stores some data value.
/*
Rules 
for naming a variable :
1. should start with a alphabet (a-z , A-Z) or underscore(_)
2. can contain digits (0-9) after the first character
3. should not contain spaces
4. should not use any special characters (!, @, #, $, %, etc)
5. should not be a reserved keyword (like int, float, return, etc)
6. variable names are case sensitive (age, Age, AGE are different variables)

*/
int main() {
    int age = 19;
    printf("My age is %d\n", age);

    int year = 2026;
    printf("%d is going to my year\n", year);
    float gpa = 6.5;
    printf("your gpa is %.1f\n",gpa);
    double pi = 3.141592653589793;
    printf("The value of pi is %.15f\n", pi);
    char grade = 'A';
    printf("Your grade is %c \n",grade);
    char name[] = "chayan";
    printf("your name is %s\n",name); 

    
    return 0;

}
/*
Contants:
Constants are fixed values that do not change during the execution of a program.
types:
1. Integer Constants: Whole numbers without a decimal point (e.g., 10, -5, 0).
2. Floating-point Constants: Numbers with a decimal point (e.g., 3.14, -0.001).
3. Character Constants: Single characters enclosed in single quotes (e.g., 'A', 'z').
4. String Constants: Sequences of characters enclosed in double quotes (e.g., "Hello    World").        
*/