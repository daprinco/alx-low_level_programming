#include "main.h"
/**
 * print_to_98 - prints all numbers up to 98
 * @n: given input number to print up to 98
 * Return: void, only prints to stdout
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(i + 48);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(i + '0');
		}
	}
	_putchar('\n');
}
