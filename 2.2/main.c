#include <stdio.h>
#include <stdlib.h>

// Write a program to find area of square, rectangle, triangle, and circle

int main()
{
    float l,l1,l2,l3,l4,h,r;
    //area of square
    printf("ENTER length of square :");
    scanf("%f",&l);
    printf("AREA of square : %.2f\n\n",l*l);

    //area of rectangle
    printf("ENTER length of rectangle :");
    scanf("%f",&l1);
    printf("ENTER breadth of rectangle :");
    scanf("%f",&l2);
    printf("AREA of rectangle : %.2f\n\n",2*(l1+l2));

    //area of rectangle
    printf("ENTER length of triangle :");
    scanf("%f",&l3);
    printf("ENTER breadth of triangle :");
    scanf("%f",&l4);
    printf("ENTER height of triangle :");
    scanf("%f",&h);
    printf("AREA of triangle : %.2f\n\n",0.5*l3*l4*h);

     //area of circle
     printf("ENTER radius of circle :");
     scanf("%f",&r);
     printf("AREA of circle : %.2f\n",3.14*r*r);

    return 0;
}
