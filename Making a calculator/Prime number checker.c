#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive number: \n");
    scanf("%d", &n);
    if(n <= 1)
    {
        printf("%d is not a prime number. \n", n);
    }
    else
    {
        int a = 1; // assuming that n is a prime number
        for(int i=2; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                a = 0; // n is not a prime number
                break;
            }
        }
        if(a != 0)
        {
            printf("%d is a prime number", n);
        }
        else
        printf("%d is not a prime number", n);
      }
    return 0;  
}