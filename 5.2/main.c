#include <stdio.h>
#include <stdlib.h>
//Write a program demonstrate functionality of calculator using switch-case
int main()
{
  char o;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &o);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (o) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
    return 0;
}
