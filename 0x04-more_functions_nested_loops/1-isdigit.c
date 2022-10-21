#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if a var is digit
 * @var: variable to be checked
 * Return: 1 if var is digit, else 0
 */

int _isdigit(int var)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
