#include "main.h"
#include "print_num.c"

/**
 * print_times_table - Prints the times table for a specific number
 * @n: times table number
 * Return: nothing
 */

void print_times_table(int n)
{
	if (!(n > 15) && !(n <= 0))
	{
		int i = 0;
		int j;

		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				if (j != 0)
				{
					_putchar(' ');
					if (j * i < 100)
						_putchar(' ');
					if (j * i < 10)
						_putchar(' ');
					print_num(i * j);
					if (j != n)
						_putchar(',');
				}
				else
				{
					print_num(i * j);
					_putchar(',');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
