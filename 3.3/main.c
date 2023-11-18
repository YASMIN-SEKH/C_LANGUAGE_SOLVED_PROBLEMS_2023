#include <stdio.h>
#include <stdlib.h>
//Write a program to read a number and check it is even or odd.

int main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    if (num % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;

}
