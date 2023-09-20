#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer to the string
 * Return: the length of the string
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
