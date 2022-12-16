#include "main.h"
#include <stdio.h>

/**
 * main - print fiz buzz on multiple of 3 and 5
 * Description - prints fiz for multiples of 3
 * buzz for multiples of 5 and fizzbuzz for multiples of both
 * otherwhise prints the number
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
