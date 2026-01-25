#include<stdio.h>
//Q. write 2 function one to print "hello" another to print" goodbye".
void printhello();
void goodbye();

/*
int main (){
    printhello();
    goodbye();
    return 0;
}
void printhello(){
    printf("Hello\n");
}
void goodbye(){
    printf("Goodbye\n");
}
   */

  
// Q write a function that print Namaste if user is indian and Bonjour if user is french.
void Namaste();
void Bonjour();
int main (){
    char ch ; 
    printf ("Enter I for indian and F for french\n");
    scanf ("%c" , &ch);
    if (ch == 'I' || ch == 'i'){
        Namaste();
    }
    else if (ch == 'F' || ch == 'f'){
        Bonjour();
    }
    else {
        printf ("Invalid Input\n");
    }
}
void Namaste ()
    {
      printf("Namaste\n");

    }
void Bonjour ()
    {
      printf("Bonjour\n");

    }

    