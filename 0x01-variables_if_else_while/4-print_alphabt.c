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
	int i = 97;

	while (i <= 122)
	{
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}

