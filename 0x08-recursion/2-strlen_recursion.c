#include "main.h"
/**
  * _strlen_recursion - Returns the length of a str
  * @s: Str to be measured
  *
  * Return: Length of the str
  */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursions(s + 1);
	}
	return (longit);
}
