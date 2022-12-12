#include <stdio.h>
/**
 * main - print all numbers from zero to nine
 * Description: print all single digit number of base 10
 * Starting from 0, followed by new line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
