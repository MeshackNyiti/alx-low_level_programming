#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n = 0;
	int c;

	while (n < 10)
	{
	for (c = 'a'; c <= 'z';c++)
	{
		_putchar (n);
	}
		n++;
		_putchar('\n');
	}
}
