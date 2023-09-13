
#include "main.h"
#include "6-abs.c"
#include "print_num.c"
/**
 * print_to_98 - check the code
 * @n: starts from
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i != n)
				_putchar(' ');
			if (i < 0)
				_putchar('-');
			print_num(_abs(i));
			if (i != 98)
				_putchar(',');
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			if (i != n)
				_putchar(' ');
			print_num(i);
			if (i != 98)
				_putchar(',');
		}
	}
	_putchar('\n');
}
