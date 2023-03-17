#include <unistd.h>
/**
*main - Prints out the last part of a quoteto the standard error.
*Return: 1 .
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);
	return (1);
}
