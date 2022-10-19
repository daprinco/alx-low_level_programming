#include "main.h"
/**
 * _islower - returns lower case alph
 *
 * @c: is an input to function
 *
 * Return:1 if lower and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);

}
