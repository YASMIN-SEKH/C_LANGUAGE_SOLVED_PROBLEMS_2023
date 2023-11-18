#include <stdio.h>
#include <stdlib.h>

//Write a program to evaluate the series 1^2+2^2+3^2+……+n^2

int main()
{
    int num,sum=0;
    printf("enter number of terms: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        sum=sum+pow(i,2);
    }
    printf("sum is %d",sum);
    return 0;
}
