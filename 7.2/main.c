#include <stdio.h>
#include <stdlib.h>

//Write a program to find 1+1/2!+1/3!+1/4!+.....+1/n!

int main()
{
    int num;
    int multiply=1,sum=0;
    printf("enter number of terms: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        multiply=multiply*i;

        sum=sum+pow(multiply,-1);


    }
     printf("%d",sum);

    return 0;
}
