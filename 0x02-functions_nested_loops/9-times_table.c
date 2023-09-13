#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j != 0)
				_putchar(' ');
			if (j != 0 && j * i < 10)
				_putchar(' ');
			if (i * j < 10)
			{
				_putchar('0' + (i * j));
			}
			else
			{
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
			j++;
		}
		i++;
	}
}
