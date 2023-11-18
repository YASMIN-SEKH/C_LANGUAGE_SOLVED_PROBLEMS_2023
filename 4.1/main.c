#include <stdio.h>
#include <stdlib.h>

//Write a program to find that the accepted number is Negative, or Positive or Zero.

int main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);

    if(num>0)
        printf("positive");
    else if(num==0)
    {
        printf("zero");
    }
    else
        printf("negative");



    return 0;

}
