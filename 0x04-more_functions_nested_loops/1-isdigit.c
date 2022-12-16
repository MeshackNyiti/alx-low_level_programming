#include "main.h"

/**
 * _isdigit - Check if character is a digit
 * @c: The character to be checked
 *
 * Return: 1 for the digit else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
