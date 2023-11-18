#include <stdio.h>
#include <stdlib.h>

//Write a program to read three numbers from keyboard and find out maximum out of these
//three (Nested if else).

int main()
{
    int num1,num2,num3;
    printf("enter number one: ");
    scanf("%d",&num1);
    printf("enter number one: ");
    scanf("%d",&num2);
    printf("enter number one: ");
    scanf("%d",&num3);

    if(num1>num2)
    {
        if(num1>num3)
            printf("%d is maximum",num1);
        else
            printf("%d is maximum",num3);
    }

    else
    {
        if(num2>num3)
             printf("%d is maximum",num2);
        else
             printf("%d is maximum",num3);
    }

    return 0;
}
