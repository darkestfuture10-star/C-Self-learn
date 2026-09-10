// Basics of C

#include <stdio.h> // stdio header file is included for standard input and output functions like printf and scanf. 
// it works as a preprocessor directive that tells the compiler to include the contents of the stdio.h header file in the program before compilation.

int main() /*main function is the entry point of the program. It is where the execution of the program begins. 
int is a data type used to declare integer variables. There are other data types in C like float, double, char, etc.
every code in C must be inside a function. The main function is the starting point of the program. */
{
    printf("Hello world \nhow are you today?"); /*printf is a standard library function that is used to print output to the console.
The string "Hello world \n how are you today?" is passed as an argument to the printf function.
The /n works as a newline character that makes the output appear on a new line. Like this
Hello world
how are you today? */
    return 0; // return statement indicates that the program has executed successfully. Returning 0 typically signifies successful completion of the program.
}


/* Dont forget the ; semicolon at the end of each statement in C. It is used to terminate statements and separate them from one another.
and C is as case sensitive language, meaning that uppercase and lowercase letters are treated as different characters. For example, "Hello" and "hello" would be considered different identifiers in C.
printf will work but Printf wont */


/*
| Symbol | Name            | Common use               |
| ------ | --------------- | ------------------------ |
| `;`    | Semicolon       | End of statement         |
| `{ }`  | Curly braces    | Code blocks              |
| `( )`  | Parentheses     | Functions/conditions     |
| `[ ]`  | Square brackets | Arrays                   |
| `"`    | Double quote    | Strings                  |
| `'`    | Single quote    | Characters               |
| `#`    | Hash            | Preprocessor directives  |
| `=`    | Assignment      | Assign a value           |
| `==`   | Equality        | Compare values           |
| `+`    | Plus            | Addition                 |
| `-`    | Minus           | Subtraction              |
| `*`    | Asterisk        | Multiplication / pointer |
| `/`    | Slash           | Division                 |
| `%`    | Modulo          | Remainder                |
| `&`    | Ampersand       | Address-of / other uses  |
*/
