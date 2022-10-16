#include <stdio.h>
/**
 * main - Entry
 *
 * Description: function declaration
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 9)
		{	putchar(48 + i);
			putchar(',');
			putchar(32);
		}
		else
		{
			putchar(48 + i);
		}
		i++;
	}

	return (0);
}

