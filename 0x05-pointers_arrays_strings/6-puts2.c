#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - Prints the reverse of a string
 * @str1: pointer to the string
 * Return: nothing
 */
void puts2(char *str1)
{
	int i, len;

	len = _strlen(str1);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str1[i]);
	}
	_putchar('\n');
}
