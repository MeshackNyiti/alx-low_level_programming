#include "main.h"

/**
 * swap_int - swaps the value of a and b
 * @a: value to be swaped to b
 * @b: value to be swapped to a
 * Return: void
 */
void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
