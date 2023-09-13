#include "main.h"
/**
 * _isupper - Checks if a character is uppercase
 * @c: character to be checked
 * Return: 1 if c is uppercase else returns 0
 */

int _isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}
