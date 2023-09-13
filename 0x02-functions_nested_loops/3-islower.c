#include <stdio.h>
#include "main.h"

/**
 * _islower - Prints all the lowercase alphabets ten times
 * @c: character to be checked
 * Return: void
 */
int _islower(int c)
{
	if (c < 97)
		return (0);
	else
		return (1);
}
