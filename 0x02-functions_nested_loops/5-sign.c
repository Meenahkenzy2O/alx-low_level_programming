#include "main.h"

/**
 * print_sign - check the code.
 * @n: integer cheched
 * Return: 0 if number is zero, 1 if number is positive else  -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
