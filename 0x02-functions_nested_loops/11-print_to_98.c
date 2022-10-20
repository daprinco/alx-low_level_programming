#include "main.h"
/**
 * print_to_98 - prints all numbers up to 98
 * @n: given input number to print up to 98
 * Return: void, only prints to stdout
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar(n + '0');
	}
	else
	{
		while (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar(n + '0');

	}
	_putchar('\n');
}
