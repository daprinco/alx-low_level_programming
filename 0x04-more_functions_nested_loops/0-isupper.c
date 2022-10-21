#include "main.h"

/**
 * _isupper - check if a character is uppercase
 * @c: variable whose character is to be checked
 * Return: 1 if is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
