#include <stdio.h>
/**
 * main - print a program using printf
 *
 *Return: 0
*/
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", txt);
	return (0);
}
