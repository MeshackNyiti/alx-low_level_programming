#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void);
{
	int n = 0;
	char c;

	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		n++;
	}
}
