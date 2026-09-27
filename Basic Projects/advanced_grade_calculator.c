#include<stdio.h>
#include<string.h>

int main()
{
    printf("Welcome to grade calculator\nby EasyMade\n\nEnter your full name: ");

    char names[][25] = {"0"};

    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names[0]) - 1] = '\0';

    float math, physics, chemistry, biology;
    printf("Enter the marks of the following subjects...\n");

    printf("Math: ");
    scanf("%f", &math);

    printf("Physics: ");
    scanf("%f", &physics);

    printf("Chemistry: ");
    scanf("%f", &chemistry);

    printf("Biology: ");
    scanf("%f", &biology);

    int avg = (math + physics + chemistry + biology) / 4;

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
