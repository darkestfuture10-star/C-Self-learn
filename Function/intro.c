// Introduction to functions

#include<stdio.h>

float calc(int a, int b)
{
    float d = a + b;
    float c = a - b;
    float sum = (d + c) / (a + b);

    return sum;
}

int main()
{   
    
    float a, b;
    printf("Enter the value of a & b\n");
    scanf("%f %f", &a, &b);
    
    float sum = calc(a, b);
    printf("%f", sum);

    return 0;
}