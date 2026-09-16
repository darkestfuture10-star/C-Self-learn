// making a loop for prime numbers 0 to nth
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to see all the prime numbers before it");
    scanf("%d", &n);
    for(int i=2; i<n; i++)
    {
        int a = 1; // assuming that n is a prime number
        for(int j=2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                a = 0; // n is not a prime number
                break;
            }
        }
        if(a != 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}