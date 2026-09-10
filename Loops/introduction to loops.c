// Getting introduced to loops in C programming language

// Printing a number nth time by loop

#include <stdio.h>

int main()
{
    int num, n, counter;

    printf("Enter a number:\n ");
    scanf("%d", &num);

    printf("How many times you want it to be printed?\n ");
    scanf("%d", &n);

    for(counter = 0; counter < n; counter++)
    {
        printf("%d\n", num);
    }

    return 0;
}

/*
here counter is necessery as it counts how many times the number is printed
like suppose n = 5, then counter will go from 0 to 5, and the number will be printed 5 times 
in the for loop when counter is 0 and the condition is counter less than n then it increases till the conditon is met (value of n)
 */