#include <stdio.h>
#include <unistd.h>
/**
*main - Prints out the last part of a quote to the stderr
*Return: (1) (success)
*/
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korper, 2015-10-19\n", stdout);
	return (1);
}
