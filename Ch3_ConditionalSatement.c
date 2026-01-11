/*
if - else statement in C
    This program demonstrates the use of if-else conditional statements in C.\
    It checks whether a given number is even or odd and prints the result accordingly.
    if(condition){
        // code to be executed if condition is true
    } else {
        // code to be executed if condition is false
    }
*/
#include <stdio.h>
int main(){
    int age= 19 ;
    if (age >= 18){
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");


        // else if ladder
        if (age >= 18 && age < 60){
            printf("You are an adult.\n");
        } else if (age >= 60){
            printf("You are a senior citizen.\n");
        } else {
            printf("You are a minor.\n");
        }
    }
}
// conditional operators 
//Ternary Operator: (condition) ? expression_if_true : expression_if_false;