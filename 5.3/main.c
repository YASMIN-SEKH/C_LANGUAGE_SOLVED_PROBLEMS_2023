#include <stdio.h>
#include <stdlib.h>

//Write a program to find factorial of a given number

int main()
{
    int num;
    int multiply=1,sum=0;
    printf("enter number: ");
    scanf("%d",&num);

    for(int i=1; i<=num; ++i)
    {
        multiply=multiply*i;


    }
     printf("%llu",multiply);

    return 0;
}
