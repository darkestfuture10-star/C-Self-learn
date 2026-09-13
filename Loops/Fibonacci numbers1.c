
#include <stdio.h>
#include <math.h>


int main()
{
    int n, a, b, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(a = 0; a < n; a++)
    {
        printf("\n%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}