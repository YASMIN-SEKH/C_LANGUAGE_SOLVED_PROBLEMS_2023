#include <stdio.h>
#include <stdlib.h>

/*Write a program to read marks from keyboard and your program should display
equivalent grade according to following table (if else ladder);
 Marks Grade
 100 - 80 Distinction
 79 - 60 First Class
 59 - 40 Second Class
 < 40 Fail*/

int main()
{
   int a;
   printf("enter your marks in range 0-100: ");
   scanf("%d",&a);
   if(a >= 80 && a <= 100)
      printf("Distinction");
   else if(a >= 60 && a <= 79)
      printf("First Class");
   else if(a >= 59 && a <= 40)
      printf("Second Class");
   else if(a >= 0 && a < 40)
      printf("Fail");
   else
      printf("invalid marks");
    return 0;
}
