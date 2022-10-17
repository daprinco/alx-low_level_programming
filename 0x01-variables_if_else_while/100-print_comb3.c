#include <stdio.h>
/**
 * main – Entry
 *
 * Description: Function to calculate
 *
 * Return: (0) - Success
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			j++;

			if (k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
		j = k;
		i++;

	}
	putchar('\n');
	return (0);

}
