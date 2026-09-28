#include<stdio.h>
#include<string.h>

int subMark(char sub[])
{
    float mark;
    do
    {
        printf("%s", sub);
        scanf("%f", &mark);
        if(mark > 100)
        {
            printf("Invalid number!!\nPlease try again.");
        }
    }
    while(mark > 100);
    
    return mark;
}

int main()
{
    printf("Welcome to grade calculator\nby EasyMade\n\nEnter your full name: ");

    char names[][25] = {"0"};

    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names[0]) - 1] = '\0';

    float math, physics, chemistry, biology;
    printf("Enter the marks of the following subjects...\n");

    math = subMark("\nMath:");
    physics = subMark("\nPhysics:");
    chemistry = subMark("\nChemistry:");
    biology = subMark("\nBiology:");

    float avg = (math + physics + chemistry + biology) / 4;

    if(avg >= 80)
    {
    printf("\nCongrats!! \nyou got A+");
    }
    else if(avg >= 70 && avg < 90 )
    {
        printf("\nGreat! \nyou got A");
    }
    else
    {
        printf("\nBetter luck next time.");
    }
    return 0;
}


/*
    1.5v, set the mark limit to 100 & used function to call the mark & subject input
*/