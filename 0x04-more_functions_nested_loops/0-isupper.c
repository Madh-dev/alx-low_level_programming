#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c is the character to check
 * Return - 1 if it is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
