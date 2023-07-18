#include <stdio.h>

int main() {

  char operator;
  double n1, n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter two operands: ");
  scanf("%lf %lf", &n1, &n2);

  switch (operator) {
    //Addition
    case '+':
      printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
      break;
      //Subtraction
    case '-':
      printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
      break;
      //Multiplication
    case '*':
      printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
      break;
      //Division
    case '/':
      printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
  return 0;
}
