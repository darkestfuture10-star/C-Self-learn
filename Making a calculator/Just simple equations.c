// Making a simple Calculator in C

#include <stdio.h> // stdio header file is included for standard input and output functions like printf and scanf.
// We dont need math.h header file because we are not using any mathematical functions like sqrt, pow, etc. in this simple calculator program.
int main()
{
    int a, b, c, d, sum, sub, mul, div; // declaring variables to store the input numbers and the results of the calculations.
    printf("Enter the first number: "); // prompt the user to enter the first number.
    scanf("%d", &a); // read the first number from the user and store it in variable a. Here %d is a format specifier that is used to put a desimal number as input
    printf("Enter the second number: "); 
    scanf("%d", &b); 
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the fourth number: ");
    scanf("%d", &d);
    
    sum = a + d;
    sub = b - c;
    mul = sub * sum;
    div = sum / sub; // basically you can give any equation you want to calculate here, just make sure to use the correct operators and parentheses to get the desired result.
    printf("The result of the mul is: %d\nThe result of div is: %d", mul, div); // print the result


    return 0;
}

/* you can add lot more variables and calculations as needed */