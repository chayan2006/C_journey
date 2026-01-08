
// # include <stdio.h>
// int main (){
//     int a , b ;
//     printf("Enter a : ");
//     scanf("%d",&a); // & is the addressn of the variable .
//     printf("Enter b : ");
//     scanf("%d",&b);
//     int sum = a + b;
//     printf("The sum of te two number is : %d",sum);


//     return 0;
// }

# include <stdio.h>
int main(){
    //Q 1. Write a program to calculate area of a sqare.
    //(side is give)
    int side;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    int area = side*side;
    printf("The are of the side is %d",area);
    return 0;
}