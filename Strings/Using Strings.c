// fgets() = Reads space as input, scanf() dont read space;  fgets(, sizeof(), stdin);
#include <stdio.h>
#include<string.h>

int main()
{
    char names[][25] = {"0"};

    printf("Enter a name: ");
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names[0]) - 1] = '\0';

    int size = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < size; i++)
    {
        printf("%s ", names);
    }


    return 0;
}