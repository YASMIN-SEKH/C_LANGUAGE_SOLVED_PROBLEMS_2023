#include <stdio.h>
#include <stdlib.h>

//Write a program to generate first n number of Fibonacci series

int main()
{
    int num, t1=0, t2=1;
    int nextTerm=t1+t2;
    printf("enter number of terms: ");
    scanf("%d",&num);

    printf("%d\n%d\n",t1,t2);

    for(int i=3; i<=num; i++)
    {
        printf("%d\n",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}
