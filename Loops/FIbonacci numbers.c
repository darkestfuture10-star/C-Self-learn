// FIbonacci numbers series using loops
// 0 to nth Fibonacci numbers
#include <stdio.h>
#include <math.h>

int main()
{
    int n, a = 0, b = 1, c, d;
    printf("Enter the number of terms: ");
    scanf("%d", &n); 

    printf("Fibonacci Series: \n");

    for(d = 0; d <= n; d++)
    {
        if(d <= 1)
        {
            c = d;
        }
        else 
        {
            c = a + b;            
            a = b;
            b = c;           
        }
        
        printf("%d\n", c);
    }

    
    return 0;
}


/*
To understand the logic of the for loop, write down the first 4 fibonacci numbers on a paper and see how the values of a, b, and c change with each iteration of the loop.
when d = 0, c = 0, a = 0, b = 1
when d = 1, c = 1, a = 0, b = 1
when d = 2, c = 1, a = 1, b = 1
*/