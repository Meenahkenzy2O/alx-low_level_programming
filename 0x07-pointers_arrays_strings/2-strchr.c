#include "main.h"

/**
 * _strchr - locate the character in the string
 * @s: string
 * @c: character
 * Return: location of the found character or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
