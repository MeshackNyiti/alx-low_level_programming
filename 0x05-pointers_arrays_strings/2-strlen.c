#include "main.h"

/**
 * _strlen - Returns the length of string
 * @s: string to count length
 * Return: String Length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
