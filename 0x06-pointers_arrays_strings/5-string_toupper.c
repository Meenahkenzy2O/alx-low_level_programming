#include "main.h"

/**
 * string_toupper - Changes case of string to all caps
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 'Z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
