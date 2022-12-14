#include "main.h"
/**
 * _isalpha - a function checks for alphabetic character
 *
 * Return: 1 if it is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
