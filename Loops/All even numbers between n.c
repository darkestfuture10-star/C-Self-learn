// Even numbers between 0 to n
#include <stdio.h>
#include <math.h>

int main ()
{
    int n, i;

    printf("Put a number: ");
    scanf("%d", &n);
    printf("All the even numbers between 0 and %d are ", n);

    for(i = 2; i < n; i += 2)
    {
        printf("\n%d", i);
    }
    return 0;
}
