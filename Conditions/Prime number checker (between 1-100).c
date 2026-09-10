// prime or odd number using conditional statements in C programming language (only for numbers 1-100)

#include <stdio.h>

int main()
{
    int num, num2;
    num2 = pow(num, 2);
    printf("Pick a number: \n");
    scanf("%d", &num);

    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) 
    {
        printf("%d is not a prime number", num);
    }
    else
    {
        printf("%d is a prime number", num);
    }

    return 0;

}