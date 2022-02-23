/*
Hello and welcome to my first project in C language!
I wrote it after watching free course, took me 10 mins
Enjoy <3

-> Author:
- Ivano

*/


#include <stdio.h>

int main() {

  char operaxd;
  double first, second;
  printf("Operator (+, -, *, /): ");
  scanf("%c", &operaxd);
  printf("(Ex: 5 10) Two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (operaxd) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
      break;
    // if operatoor isnt in cases then print error
    default:
      printf("Error! operator isn't found.");
  }
  return 0;
}
