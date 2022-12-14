#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int n, c;

	n = 0;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
}
