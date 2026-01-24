#include <stdio.h>
#include <math.h>
int main(){
    int a = 1.99999999;
    printf("The value of a is %d\n",a);
    
    // Q a. write a program to check if a number is divisible by 2 or not .
    int num;
    printf("Enter the numbers:");
    scanf("%d",&num);
    printf("%d",num % 2 == 0);

    // Q Print 1 (true) OR 0(false) for following statements:
    // a. if it's sunday & it's snowing -> true 
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d", isSunday && isSnowing);

    // b. if it's monday or it's raining -> true 
    int isMonday = 1;
    int isRaining = 0;
    printf("%d", isMonday || isRaining);
    
    // c. if a number is greater than 9 & less than 100 take input from the user -> true
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d", num > 9 && num < 100);
    
    return 0;
}