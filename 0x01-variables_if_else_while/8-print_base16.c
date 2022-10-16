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
		putchar(48 + i);
		i++;
	}
	i = 97;
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}

