#include<stdio.h> 

int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 9, 10}; 
    
    
    
    /*
    printf("%d\n", sizeof(numbers));    //gives the size of the function in bytes
    printf("%d\n", sizeof(numbers[0])); // gives the size of the elements
    */
    
    int elements = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < elements; i++)
    {
        printf("%d ", numbers[i]); // here you have change the condition in the for loop manually to print all the numbers
    }
    
    return 0;
}