#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if c is digit else returns 0
 */

int _isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
