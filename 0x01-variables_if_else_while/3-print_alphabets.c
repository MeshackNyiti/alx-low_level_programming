#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Decription: print the alphabet in lower case
 * and in uppercase, follow by new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
