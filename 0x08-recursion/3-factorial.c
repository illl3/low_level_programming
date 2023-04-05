#include "main.h"
/**
  * factorial(int n) - returns the factorial
  * @n: Number to return the factorial from
  *
  * Return: Factorial of n
  */
int factorial(int n);
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
