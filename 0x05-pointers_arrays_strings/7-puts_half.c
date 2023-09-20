#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints the reverse of a string
 * @str1: pointer to the string
 * Return: nothing
 */
void puts_half(char *str1)
{
	int i, len, half;

	len = _strlen(str1);
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;
	for (i = half; i < len; i++)
	{
		_putchar(str1[i]);
	}
	_putchar('\n');
}
