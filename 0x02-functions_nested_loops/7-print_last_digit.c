#include "main.h"

/**
*print_last_digit - prints the last digit
*@n: the int to extract the last digit from
*Return: value of the last digit
*/

int print_las_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
