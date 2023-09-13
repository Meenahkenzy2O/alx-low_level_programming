#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints all the lowercase alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
