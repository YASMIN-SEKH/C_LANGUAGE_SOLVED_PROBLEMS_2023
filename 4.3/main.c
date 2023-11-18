#include <stdio.h>
#include <stdlib.h>

//Write a program to check whether the entered character is capital, small letter, digit or any
//special character.

int main()
{
    char c;
   printf("enter a character:");
   scanf("%c",&c);
   if(c >= 65 && c <= 90)
      printf("Upper Case Letter");
   else if(c >= 97 && c <= 122)
      printf("Lower Case letter");
   else if(c >= 48 && c <= 57)
      printf("Digit");
   else
      printf("Special Character");
    return 0;
}
