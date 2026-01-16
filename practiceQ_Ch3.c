// Write a program to checck if a student passsed or failed .
// marks> 30 is pass 
// marks <= 30 IS FAIL
#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks > 30){
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}
/*
write  a program to give grades to student marks < 30 id c 
30  < = marks < 70 is b 
70 <= marks <=90 is a
90 <= marks <= 100 is a + 
*/
#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks < 30){
        printf("Grade: C\n");
    } else if (marks >= 30 && marks < 70){
        printf("Grade: B\n");
    } else if (marks >= 70 && marks <= 90){
        printf("Grade: A\n");
    } else if (marks > 90 && marks <= 100){
        printf("Grade: A+\n");
    } else {
        printf("Invalid marks entered.\n");
    }
    return 0;
}
// Write a program to find if a character entered by user is upper case or not .
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("The character is an uppercase letter.\n");
    } 
    else if (ch >= 'a' && ch <= 'z'){
        printf("The character is  lowercase  letter.\n");
    } else {
        printf("The character is not an alphabet letter.\n");
    }
    return 0;
}