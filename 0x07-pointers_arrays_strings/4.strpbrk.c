#include "main.h"

/**
 * _strpbk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Sucess)
*/
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				return (s);
		}
	s++;
	}
	return ('\0');
}

