#include "main.h"

/**
 * more_numbers - print ten times 0 to 14
 *
 * Return: 10 times number 0 to 14
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}

			_putchar((b % 10) + '0');
		}

		_putchar('\n');
	}
}
