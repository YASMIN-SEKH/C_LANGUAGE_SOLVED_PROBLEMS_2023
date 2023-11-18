#include <stdio.h>
#include <stdlib.h>

//Write a program to calculate simple interest (i = (p*r*n)/100).
//Where i = Simple interest, p = Principal amount, r = Rate of interest, n = Number of years

int main()
{
    float p, r, n;
    printf("enter Principal Amount: ");
    scanf("%f",&p);
    printf("enter Rate of Interest: ");
    scanf("%f",&r);
    printf("enter Number of years : ");
    scanf("%f",&n);

    printf("\nsimple interest is : %f",(p*r*n)/100);


    return 0;
}
