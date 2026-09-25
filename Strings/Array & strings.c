#include<stdio.h>
#include<string.h>

int main()
{

    char cars[][10] =  // This works like column & row
    {
        "BMW",            
        "Bugatti",       // this works as a 2d geometry system
        "Lambo", 
        "Corvette", 
        "Toyota", 
        "Dodge"
    }; 

    int s = sizeof(cars) / sizeof(cars[0]) ; // add more cars in the string to see if it works or not

    printf("I own these cars. \n");

   for(int i = 0; i < s; i++)
   {
    printf("%s\n", cars[i]);
   }

    return 0;
}