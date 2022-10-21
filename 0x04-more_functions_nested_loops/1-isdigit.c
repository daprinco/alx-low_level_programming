#include "main.h"

/**
 * _isdigit - check if c is digit
 * @c: variable to be checked
 * Return: 1 if c is digit, else 0
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
	{
		y = 1;
	}

	return (y);
}
