
# include <stdio.h>
int main (){
    int a , b ;
    printf("Enter a : ");
    scanf("%d",&a); // & is the addressn of the variable .
    printf("Enter b : ");
    scanf("%d",&b);
    int sum = a + b;
    printf("The sum of te two number is : %d",sum);







    //Q 1. Write a program to calculate area of a sqare.
    //(side is give)
    int side;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    int area = side*side;
    printf("The are of the side is %d",area);


    //Q a. Write a program to calculate perimeter of rectangle .
    int lenght;
    printf("Enter the lenght of the rectangle: ");
    scanf("%d",&lenght);
    int breadth;
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&breadth);
    int perimeter = 2*(lenght + breadth);
    printf("The perimeter of the rectangle is %d",perimeter);


    // Q take a number (n) from the user & output its cubes(n*n*n).
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int cube = n*n*n;
    printf("The cube of the number is %d",cube);

    return 0;
}