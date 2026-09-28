// Introduction to do while loop

#include<stdio.h>
int main()
{
    int n;
    
    do
    {
        printf("\nPick a number: ");
        scanf("%d", &n);
    
        if(n == 91)
        {
            printf("\nCorrect number!!!");
        }
        else
        {
            printf("wrong number\ntry again");
        }
    
    } 
    while(n != 91);
    
    return 0;
}