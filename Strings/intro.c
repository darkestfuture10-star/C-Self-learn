#include<stdio.h>
#include<string.h>

int main()
{
    char name1[] = "Easy";
    char name2[] = "Made";

    /*
    printf("%s %s", name1, name2);
    */


   //strlwr();                               // converts a string to lowercase
   //strupr();                              // converts a string to uppercase
   //strcat(,);                            // appends string2 to end of string1
   //strncat(, , 1);                      // appends n characters from string2 to string1
   //strcpy(,);                          // copy string2 to string1
   //strncpy(, , 2);                    // copy n characters of string2 to string1
   
   //strset(, '?');                            //sets all characters of a string to a given character
   //strnset(, 'x', 1);                       //sets first n characters of a string to a given character
   //strrev();                               //reverses a string

   //strlen();                   // returns string length as int
   //strcmp(, );                // string compare all characters
   //strncmp(, , 1);           // string compare n characters
   //strcmpi(, );             // string compare all (ignore case)
   //strnicmp(, , 1);        // string compare n characters (ignore case)

    
   if(strcmp(name1, name2) == 0)
   {
      printf("These strings are the same");
   }
   else
   {
      printf("These strings are not the same");
   }
   

       return 0;
}
