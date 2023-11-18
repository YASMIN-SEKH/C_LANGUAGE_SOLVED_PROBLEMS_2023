#include <stdio.h>
#include <stdlib.h>

//Write a program to reverse a number.

int main()
{
    int num,reverse=0;

    printf("enter number: ");
    scanf("%d",&num);

    while (num!=0)
    {
        int remainder = num%10;
        printf("%d",remainder);

        reverse=reverse*10+remainder;
        num=num/10;

    }

    return 0;
}
