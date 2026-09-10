// Program to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h> // math.h header file is included for mathematical functions like sqrt (square root) and pow (power). These functions are used to calculate the roots of the quadratic equation.

int main()
{
    float a, b, c, dit, x, y; // dit is the diterminer of the equation
    
    printf("The coefficient of the quadratic equation(a,b,c) are : \n");
    scanf("%f %f %f", &a, &b, &c);

    dit = pow(b, 2) - 4 * a * c ; //saving the vakue of the diterminer in the variable dit.

    if(dit < 0) // the first condition checks if the diterminer is less than 0, which means that the roots of the equation are not real numbers.
    {
        printf("The roots of the equation are not real"); // tells the roots are not real numbers
    }
    else if (dit == 0) // the 2nd condition checks if the diterminer is equal to 0, which means that the roots of the equation are equal.
    {
        x = y = -b/(2*a); // if the roots are equal, then the value of x and y is calculated using the formula -b/(2*a) and stored in the variables x and y.
        
        printf("The roots of equation are equal= %.2f ", x); // prints the value of x and y, which are equal, to the console.

    }
    else // if none of the conditions are met, then the roots of the equation are real and different. The value of x and y is calculated using the quadratic formula and stored in the variables x and y.
    {
        x = (-b + sqrt(dit)) / (2 * a);
        y = (-b - sqrt(dit)) / (2 * a);

        printf("The roots of the equation are %.2f and %.2f", x, y); // the roots are printed to the console using the printf function.
    }
    return 0;

}

/* here %.2f is used to print the values of x and y with 2 decimal places, if you try .3f, it will print 3 decimal places the %f function can be used to print floating-point numbers with six degits after the decimal point */
