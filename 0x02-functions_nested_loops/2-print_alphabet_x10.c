#include "main.h"

/**
 * print_alphabet_x10 - prints 10x alpha in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;
	char i = 'a';

	for (j = 0; j < 10; j++)
	{

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}

	_putchar('\n');

	}

}
