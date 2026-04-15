/*
==============================================================
  CHAPTER 1 — BASICS OF C & VARIABLES / DATA TYPES
==============================================================

HISTORY:
  - C was developed by Dennis Ritchie at Bell Labs in 1972.
  - It is a procedural, compiled, middle-level language.
  - Used in OS (Linux, Windows kernel), embedded systems, databases.

COMPILATION PROCESS (4 stages):
  Source (.c)
    → Preprocessor  → removes comments, expands macros (#include, #define)
    → Compiler      → converts to Assembly code
    → Assembler     → converts to Object code (.obj / .o)
    → Linker        → links libraries → Executable (.exe)

STRUCTURE OF A C PROGRAM:
────────────────────────────────────
  #include <stdio.h>        ← Preprocessor directive (header file)

  int main() {              ← Entry point of every C program
      // statements
      return 0;             ← Return 0 = success to OS
  }
────────────────────────────────────

HEADER FILES (common ones):
  stdio.h   → printf, scanf, getchar, putchar
  math.h    → sqrt, pow, abs, ceil, floor
  string.h  → strlen, strcpy, strcmp, strcat
  stdlib.h  → malloc, free, exit, rand
  ctype.h   → isalpha, isdigit, toupper, tolower
  time.h    → time, clock

==============================================================
  VARIABLES
==============================================================
  A variable is a named memory location that stores a value.

  Syntax:  datatype variableName = value;
  Example: int age = 19;

NAMING RULES:
  ✓ Must start with a letter (a-z, A-Z) or underscore (_)
  ✓ Can contain digits AFTER the first character
  ✗ No spaces, no special characters (!, @, #, $)
  ✗ Cannot be a keyword (int, float, return, while...)
  ✓ Case-sensitive: age ≠ Age ≠ AGE

==============================================================
  DATA TYPES
==============================================================
  TYPE        KEYWORD   SIZE (typical)  FORMAT    RANGE
  ─────────────────────────────────────────────────────────
  Integer     int       4 bytes         %d        -2B to +2B
  Short int   short     2 bytes         %hd
  Long int    long      4/8 bytes       %ld
  Long long   long long 8 bytes         %lld
  Unsigned int unsigned 4 bytes         %u        0 to 4B
  Float       float     4 bytes         %f        6-7 decimals
  Double      double    8 bytes         %lf       15 decimals
  Long double            12/16 bytes    %Lf
  Character   char      1 byte          %c        -128 to 127
  String      char[]    N bytes         %s

  NOTE: Use sizeof() to check size on your machine.
    printf("%zu\n", sizeof(int));   // typically prints 4

==============================================================
  CONSTANTS
==============================================================
  Constants are fixed values that do NOT change.

  METHOD 1: const keyword
    const float PI = 3.14159;

  METHOD 2: #define macro (no type, no semicolon!)
    #define PI 3.14159
    #define MAX 100

  TYPES:
    Integer   → 10, -5, 0
    Float     → 3.14, -0.001
    Character → 'A', 'z', '\n'
    String    → "Hello World"

==============================================================
  FORMAT SPECIFIERS (printf & scanf)
==============================================================
  %d   → int
  %f   → float
  %lf  → double
  %c   → char
  %s   → string
  %u   → unsigned int
  %ld  → long int
  %lld → long long int
  %o   → octal
  %x   → hexadecimal
  %e   → scientific notation
  %p   → pointer address
  %%   → literal percent sign

  WIDTH & PRECISION:
    printf("%.2f", 3.14159);   // 3.14
    printf("%10d", 42);        // right-aligned in 10 chars
    printf("%-10d", 42);       // left-aligned in 10 chars

==============================================================
  TYPE CASTING
==============================================================
  Implicit: done automatically by compiler
    int x = 5;
    float y = x;  // x is implicitly cast to float

  Explicit: done manually by programmer
    float f = 9.99;
    int i = (int)f;  // i = 9 (truncates decimal)

  int a = 5, b = 2;
  float result = (float)a / b;  // result = 2.5 (not 2)
*/

#include <stdio.h>

int main() {
    // Integer types
    int age = 19;
    long long bigNum = 9876543210LL;

    // Float types
    float gpa = 6.5f;
    double pi = 3.141592653589793;

    // Character
    char grade = 'A';

    // String (char array)
    char name[] = "Chayan";

    // Constant
    const int YEAR = 2026;

    // sizeof
    printf("--- Data Types ---\n");
    printf("int     : %d bytes\n", (int)sizeof(int));
    printf("float   : %d bytes\n", (int)sizeof(float));
    printf("double  : %d bytes\n", (int)sizeof(double));
    printf("char    : %d bytes\n", (int)sizeof(char));

    printf("\n--- Variables ---\n");
    printf("Age     : %d\n", age);
    printf("Big Num : %lld\n", bigNum);
    printf("GPA     : %.1f\n", gpa);
    printf("Pi      : %.15f\n", pi);
    printf("Grade   : %c\n", grade);
    printf("Name    : %s\n", name);
    printf("Year    : %d\n", YEAR);

    // Explicit type casting
    float result = (float)5 / 2;
    printf("\n5 / 2 (int)   = %d\n", 5 / 2);
    printf("5 / 2 (float) = %.1f\n", result);

    return 0;
}
