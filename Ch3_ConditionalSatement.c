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

    }
        // else if ladder
        if (age >= 18 && age < 60){
            printf("You are an adult.\n");
        } else if (age >= 60){
            printf("You are a senior citizen.\n");
        } else {
            printf("You are a minor.\n");
        }
    
}
// conditional operators 
//Ternary Operator: (condition) ? expression_if_true : expression_if_false;
int main(){
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    age >= 18? printf("Adult \n") : printf("Minor \n");
    return 0;
}
//Switch case statement
/*
switch(expression){
    case constant1:
        // code to be executed if expression equals constant1
        break;
    case constant2:
        // code to be executed if expression equals constant2
        break;
    ...
    default:
        // code to be executed if expression doesn't match any case
}
*/
/*
switch properties 
1. The expression in a switch statement must evaluate to an integer or character type.
2. Each case label must be a constant expression.
 4. cases should be unique within a switch statement.  Duplicate case labels will result in a compilation error.
 .nested switch statements are allowed.
3. The break statement is used to exit   
cases can be in any order; they do not need to be sequential.   
*/
int main(){
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
    return 0;
}
// Nested if statement
int main(){
    int no ;
    printf("Enter the number :");
    scanf("%d",&no);
    if  (no >= 0 ){
        printf("the number is positive\n");
        if (no %2 ==0){
            printf(" the number is even \n");

        } else {
            printf("The number is odd \n");
        }

    } else{
        printf("The number is negative\n");

    }
}