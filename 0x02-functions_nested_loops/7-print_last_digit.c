#include "main.h"
/**
 * print_last_digit - Computes the absolute vale of an integer
 * @t: The integer to print last number
 * Return: The last number
 */
int print_last_digit(int t)
{
	int l = t % 10;

	if (l < 0)
		l *= -1;

	_putchar(l + '0');

}
