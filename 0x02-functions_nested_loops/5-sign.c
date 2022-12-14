#include "main.h"
/**
 * print_sign - a funciton that prints sign of number
 * @n: number input
 * Return: 1 prints '+' for positive, 0 for zero, -1 prints '-' for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
