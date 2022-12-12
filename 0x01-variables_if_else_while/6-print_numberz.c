#include <stdio.h>
/**
 * main - print all numbers from zero to nine
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c <= 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
