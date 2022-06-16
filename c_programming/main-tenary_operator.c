#include <stdio.h>

/**
 * tenary_operator - using variables in ternary operator
 * Return: Always 0.
 */
int main(void) 
{
  char operator = '+';
  int num1 = 8;
  int num2 = 7;

  int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
  printf("%d", result);

  return 0;
}

