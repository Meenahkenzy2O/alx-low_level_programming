#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - Prints the reverse of a string
 * @s: pointer to the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
