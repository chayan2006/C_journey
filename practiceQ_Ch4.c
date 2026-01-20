
//Q . Print the Numbers from 0 to 10 
//0 1 2 3 4  5 6 7 8 9 10


#include <stdio.h>
int main(){
    for (int i = 0; i <= 10; i++){
        printf("%d\n", i);
    }
    return 0;
}

//Q. PRINT ALL THE EVEN NUMBERS FROM 1 TO 50

#include <stdio.h>
 int main(){
     for (int i = 1 ; i <= 50 ; i++){
        if( i % 2 == 0){
            printf("%d is even number\n", i);
        }
    }
 }

// Q.print all the odd numbers from 1 to 50

#include <stdio.h>
 int main(){
     for (int i = 1 ; i <= 50 ; i++){
        if( i % 2 != 0){
            printf("%d is odd number\n", i);
        }
    }
 }
    
// Q.Print multiplication table of a given number n
#include <stdio.h>
int main(){
    int n;
    printf("which table you want to print:");
    scanf("%d",&n);
    for(int i = 0 ; i<=10 ; i ++){
        printf("printing the table %d \n",n*i);
    }
}