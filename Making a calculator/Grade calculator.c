// making a grade calculator

#include <stdio.h>
#include <math.h>

int main()
{
    float phy, chem, math, avg, grade;

    printf("What are your marks in physics, chemistry & maths?(out of 100) \n");
    scanf("%f %f %f", &phy, &chem, &math);

    avg = (phy + chem + math) / 3;

    if(avg >= 80)
    {
    printf("Congrats!! \nyou got A+");
    }
    else if(avg >= 70 && avg < 90 )
    {
        printf("Great! \nyou got A");
    }
    else
    {
        printf("Better luck next time.");
    }
    return 0;
}