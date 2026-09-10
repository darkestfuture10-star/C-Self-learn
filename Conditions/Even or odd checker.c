// Checking prime or odd numbers

#include <stdio.h>
#include <math.h>
int main ()
{
    int num;
    printf("Enter a number:\n ");
    scanf("%d", &num);
    if (num % 2 == 0)
    { 
        printf("%d is a an even number", num);
    }
    else
    {
        printf("%d is an odd number", num);
    }
    return 0;
}