#include "main.h"
/**
 * print_num - Prints nums with Putchar
 * @n: number to be printed
 * Return: Nothing;
 */
void print_num(int n)
{
	if (n > 999)
	{
		_putchar("0" + (n / 1000));
		_putchar("0" + (n % 1000) / 100);
		_putchar("0" + (n % 100) / 10);
		_putchar("0" + (n % 10));
	}
	else if (n > 99)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + (n % 100) / 10);
		_putchar('0' + (n % 10));
	}
	else if (n > 9)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else
		_putchar('0' + n);
}
