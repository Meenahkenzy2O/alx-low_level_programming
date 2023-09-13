#include "main.h"

/**
 * print_most_numbers - Prints all digits
 * Return: Nothing
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;

	}
	_putchar('\n');
}
