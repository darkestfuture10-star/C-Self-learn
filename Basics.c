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
The 32 classic C keywords are reserved words with predefined meanings in the language
| Keyword    | Use                                                                         |
| ---------- | --------------------------------------------------------------------------- |
| `auto`     | Declares a local variable with automatic storage duration.                  |
| `break`    | Immediately exits a loop or `switch`.                                       |
| `case`     | Defines a condition/value inside a `switch` statement.                      |
| `char`     | Declares a character-type variable.                                         |
| `const`    | Makes a variable's value unmodifiable through that variable.                |
| `continue` | Skips the current loop iteration and moves to the next one.                 |
| `default`  | Defines the fallback case in a `switch`.                                    |
| `do`       | Starts a `do-while` loop that executes at least once.                       |
| `double`   | Declares a double-precision floating-point variable.                        |
| `else`     | Executes code when an `if` condition is false.                              |
| `enum`     | Defines a set of named integer constants.                                   |
| `extern`   | Declares a variable/function that is defined elsewhere.                     |
| `float`    | Declares a single-precision decimal variable.                               |
| `for`      | Creates a loop with initialization, condition, and update.                  |
| `goto`     | Jumps directly to a labeled statement.                                      |
| `if`       | Executes code when a condition is true.                                     |
| `int`      | Declares an integer variable.                                               |
| `long`     | Declares a long integer or modifies an integer type's size.                 |
| `register` | Suggests storing a variable in a CPU register for faster access.            |
| `return`   | Exits a function and optionally sends a value back.                         |
| `short`    | Declares a short integer or modifies an integer type's size.                |
| `signed`   | Allows an integer type to store positive and negative values.               |
| `sizeof`   | Returns the size in bytes of a type or object.                              |
| `static`   | Gives a variable persistent storage or limits linkage depending on context. |
| `struct`   | Defines a structure that groups different data types together.              |
| `switch`   | Selects one block of code based on an expression's value.                   |
| `typedef`  | Creates an alias (alternative name) for a data type.                        |
| `union`    | Defines a type where multiple members share the same memory location.       |
| `unsigned` | Makes an integer type store only non-negative values.                       |
| `void`     | Represents no value/type, commonly used for functions returning nothing.    |
| `volatile` | Tells the compiler a variable's value may change unexpectedly.              |
| `while`    | Repeats code while a condition remains true.                                |
*/

/*
These are the most common symbols/operators you'll see constantly:
| Symbol  | Name                | Common use                                |
| ------- | ------------------- | ----------------------------------------- |
| `;`     | Semicolon           | Ends a statement                          |
| `{ }`   | Curly braces        | Defines a block of code                   |
| `( )`   | Parentheses         | Functions and conditions                  |
| `[ ]`   | Square brackets     | Arrays                                    |
| `"`     | Double quotes       | Strings/text                              |
| `'`     | Single quotes       | Single characters                         |
| `#`     | Hash                | Preprocessor directives like `#include`   |
| `=`     | Assignment          | Assigns a value                           |
| `==`    | Equality            | Checks if two values are equal            |
| `!=`    | Not equal           | Checks if values are different            |
| `>`     | Greater than        | Comparison                                |
| `<`     | Less than           | Comparison                                |
| `>=`    | Greater/equal       | Comparison                                |
| `<=`    | Less/equal          | Comparison                                |
| `+`     | Plus                | Addition                                  |
| `-`     | Minus               | Subtraction                               |
| `*`     | Asterisk            | Multiplication / pointers                 |
| `/`     | Slash               | Division                                  |
| `%`     | Modulo              | Gets remainder                            |
| `++`    | Increment           | Adds 1                                    |
| `--`    | Decrement           | Subtracts 1                               |
| `&&`    | Logical AND         | Both conditions must be true              |
| `\|\|`  | Logical OR          | At least one condition must be true       |
| `!`     | Logical NOT         | Reverses a condition                      |
| `&`     | Ampersand           | Address-of operator                       |
| `->`    | Arrow               | Accesses struct members through a pointer |
| `.`     | Dot                 | Accesses a struct member                  |
| `\`     | Backslash           | Used in escape sequences like `\n`        |
| `//`    | Single-line comment | Adds a comment                            |
| `/* */` | Multi-line comment  | Adds a multi-line comment                 |
*/