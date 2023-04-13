#include "main.h"
#include <stdlib.h>
/**
  * *malloc_checked - Allocates memory
  * @b: amount of bytes to allocate
  *
  * Return: a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr + malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
