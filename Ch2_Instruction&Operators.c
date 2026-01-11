// Instruction and Operators in C
#include <stdio.h>
#include <math.h>
/*
Types  of Instructions:
1. Type Declaration Instructions: These instructions are used to declare variables of specific data types before using it . For example:
   - int a; // declares an integer variable 'a'
   - float b; // declares a floating-point variable 'b'

*/

/* 2. Arithmetic Instructions: These instructions perform basic arithmetic operations such as addition, subtraction, multiplication, and division. For example:
2. Arithmetic Instructions: These instructions perform basic arithmetic operations such as addition, subtraction, multiplication, and division. For example:
   . a = b + c; // adds the values of 'b' and 'c' and assigns the result to 'a',  b and c are operands and + is operator
   . d = e * f; // multiplies the values of 'e' and 'f' and assigns the result to 'd'
Note - Single variable on the left side of the assignment operator (=) is called LHS (Left Hand Side) and the right side is called RHS (Right Hand Side)
Invalid example:
   . a + b = c; // invalid because LHS should be a single variable
   . a * b = d; // invalid because LHS should be a single variable
   . a = bc; // invalid because 'bc' is not a valid operand (it should be 'b * c' for multiplication)
   . a = b^c; // invalid because '^' is not a valid arithmetic operator in C
*/
int main (){
    int a = 10;
    int b = 20;
    int sum = a + b; // addition
    int diff = b - a; // subtraction
    int prod = a * b; // multiplication
    int quot = b / a; // division
    int x,y = a*b; // multiplication but the the result of a*b is assigned to y only not to x
    int power  = pow(a,b); // invalid because pow is not an arithmetic operator, it's a function from math.h library
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);

    return 0;

// Modular Arithmetic Operators:
    int mod = b % a; // modulus operator gives the remainder of the division of b by a
    printf("Modulus: %d\n", mod);

    /*
    Type Conversion in Arithmetic Operations:
    In arithmetic operations involving different data types, C automatically converts the operands to a common type before performing the operation. This is known as type promotion.
    For example:
    int  op int = int 
    int  op float = float
    float op float = float
    */
   printf("%d\n", 5 + 2.5); // 2.5 is promoted to int (2) before addition, result is 7
   printf("%.2f\n", 5 + 2.5); // 5 is promoted to float (5.0) before addition, result is 7.5  
   /*
   Arithmetic Instructions 
   Operator Precedence 
   *,/,%  (Higher Precedence)
   +,-    (Lower Precedence)
   1. a + b * c = a + (b * c)  // multiplication has higher precedence than addition
   2. (a + b) * c = (a + b) * c  // parentheses override precedence
   3. a + b - c + d = ((a + b) - c) + d  // left to right associativity for operators with same precedence
   4. a * b / c * d = ((a * b) / c) * d  // left to right associativity for operators with same precedence
   5. a + b % c = a + (b % c)  // modulus has higher precedence than addition
   6. a % b * c = (a % b) * c  // left to right associativity for operators with same precedence
   7. a + b * c - d / e = a + (b *  c) - (d / e)  // multiplication and division have higher precedence than addition and subtraction
   8. a - b + c % d * e = a - b + ((c % d) * e)  // modulus and multiplication have higher precedence than addition and subtraction
   9. (a + b) * (c - d) / e = ((a + b) * (c - d)) / e  // parentheses override precedence
   10. a + (b - c) * d % e = a + (((b - c) * d) % e  // parentheses override precedence
   11. a * (b + c) - d % e / f = (a * (b + c)) - ((d % e) / f)  // parentheses override precedence
   12. a / b + c * d - e % f = (a / b) + (c * d) - (e % f)  // multiplication and division have higher precedence than addition and subtraction
   13. a % b + c - d * e / f = (a % b) + c - ((d * e) / f)  // multiplication and division have higher precedence than addition and subtraction
   14. (a - b) * (c + d) % e / f = (((a - b) * (c + d)) % e) / f  // parentheses override precedence
   15. a + b - c * d % e / f = a + b - ((c * d) % e) / f  // multiplication and division have higher precedence than addition and subtraction
   16. a * b + c - d % e / f = (a * b) + c - ((d % e) / f)  // multiplication and division have higher precedence than addition and subtraction
   17. (a + b - c) * (d % e / f) = ((a + b - c) * (d % e / f))  // parentheses override precedence
   18. a / b - c + d * e % f = (a / b) - c + ((d * e) % f)  // multiplication and division have higher precedence than addition and subtraction
   19. a % b - c * d + e / f = (a % b) - (c * d) + (e / f)  // multiplication and division have higher precedence than addition and subtraction
   20. (a * b + c) - (d / e % f) = ((a * b + c) - (d / e % f))  // parentheses override precedence
   21. a + b * c - d + e / f % g = a   + (b * c) - d + ((e / f) % g)  // multiplication and division have higher precedence than addition and subtraction
   */  
}
/*
3. Control Instructions: These instructions control the flow of execution in a program. They include conditional statements and loops. For example:
   - if (a > b) { ... } // executes the block if 'a' is greater than 'b'
   - for (int i = 0; i < n; i++) { ... } // loops 'n' times
   used to dtermine the flow of program execution based on certain conditions.
   a. Sequence Control: Instructions are executed one after the other in the order they appear.
   b. Decision Control: Instructions that allow branching based on conditions (e.g., if-else statements, switch-case).
   c. Loop Control: Instructions that allow repeating a block of code multiple times (e.g., for, while, do-while loops).
   d.Case Control: Instructions that allow multi-way branching based on the value of a variable (e.g., switch-case statements).
*/