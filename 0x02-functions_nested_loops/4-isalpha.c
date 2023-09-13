#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: Character to be examined
 * Return: returns 0 if c is not an alphabet else returns 1
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
