#include <stdio.h>

int main()
{
    int n, a=23;

    printf("Welcome to the number guessing game!!!\nBy EasyMade.\n\n\nPlease enter a number between 0-100 below.\n");
    scanf("%d", &n);
    
    while(n != a)
    {
        if(n <= 0 || n >= 100)
        {
            printf("Invalid input, try again\n");
        }
        else if(n > a)
        {
            printf("Try to go lower!\n");
        }
        else if(n < a)
        {
            printf("Try to go higher!\n");
        }
        scanf("%d", &n);
    }
    
    if(n == a)
    {
        printf("Congratulations!!\nYou have guessed it right");
    }
    return 0;
}