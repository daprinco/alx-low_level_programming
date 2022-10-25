#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer a
 * @b: integer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
