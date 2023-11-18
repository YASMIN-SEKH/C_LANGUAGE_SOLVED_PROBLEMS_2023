#include <stdio.h>
#include <stdlib.h>

int main()
{
    //This program works as a calculator
    int a, b;

    printf("Enter the two numbers \n");

    scanf("%d%d", &a,&b);

    printf("The addition of the two numbers %d and %d is %d \n", a, b, a+b);
    printf("The subtraction of the two numbers %d and %d is %d \n", a, b, a-b);
    printf("The multiplication of the two numbers %d and %d is %d \n", a, b, a*b);
    //here we have used int method so as output for division we will get only the integers
    printf("The division of the two numbers %d and %d is %d \n", a, b, a/b);


    return 0;
}
