/*
Loop Control Instructions in C 
To repeat some part of code multiple times 
There Are Three Loop Control Instructions in C 
1. for Loop
2. while Loop
3. do while Loop

*/
// for loop 
/*
for (initialization ; condition ; increment/decrement){
    // code to be executed repeatedly
}
*/
// #include <stdio.h>
// int main(){
    // increment operator 
    // ++i (pre-increment)
    // i++ (post-increment)
    // decrement operator
    // --i (pre-decrement)
    // i-- (post-decrement)
//     for (int   i= 0 ; i <= 5 ; i ++){
//         printf("Hello World i will sucessfully in this yeatr\n");
//     }
//     return 0;

// }
// loop conture can be floated point value
// infinite loop
 /* 
 While Loop 
    while (condition){
        // code to be executed repeatedly
    }
 */
//  #include <stdio.h>
//  int main(){
//      int i = 1 ;
//      while(i <=5){
//         print("Hello World\n");
//         i++;
//      }
//      return 0 ;
//  }
#include <stdio.h>
 int main(){
    int n ;
    printf("Enter the no.:");
    scanf("%d",&n);
    int i = 0 ;
    while ( i <= n){
        printf("%d\n", i);
        i++;
    }
    return 0 ; 
 }
// do while loop
/*
    do {
        // code to be executed
    } while (condition);
*/