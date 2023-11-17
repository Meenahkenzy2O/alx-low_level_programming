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

	while (i <= strlen(s))
	{
		if (s[i] == c && c != '\0')
			return (&s[i]);
		if (s[i] == c)
			return ("");
		i++;
	}
	return (NULL);
}
