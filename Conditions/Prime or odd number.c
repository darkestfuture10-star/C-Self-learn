// prime or odd number using conditional statements in C programming language

#include <stdio.h>
#include <math.h>

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
        else if(num % num2 == 0)
        {
        printf("%d is not a prime number", num);
    }
    else
    {
        printf("%d is a prime number", num);
    }

    return 0;

}