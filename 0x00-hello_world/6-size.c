#include <stdio.h>
/**
 * main - print sizes of datatypes in c
 * Return: 0
 */
int main (void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;
	printf("size of char: %lu byte(S)\n",(unsigned long)sizeof(d));
	printf("size of int: %lu byte(S)\n",(unsigned long)sizeof(a));
        printf("size of long int: %lu byte(S)\n",(unsigned long)sizeof(b));
        printf("size of long long int: %lu byte(S)\n",(unsigned long)sizeof(c));
        printf("size of float: %lu byte(S)\n",(unsigned long)sizeof(e));
}	








