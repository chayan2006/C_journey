#include <stdio.h>
// Print the value of 'i' using pointer to pointer.
int main(){
 int  i = 5 ;
   int *ptr  = &i ;
   int **pptr = &ptr;{

   printf("%d\n",**pptr);
}
} 