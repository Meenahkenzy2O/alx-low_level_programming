#include "main.h"

/**
 * rot13 - Encodes string int rot13
 * @c: pointer to the string
 * Return: pointer to the string
 */
char *rot13(char *c)
{
	int count = 0, i;
	char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(c + count) != '\0')
	{
		i = 0;
		while (*(inp + i) != '\0')
		{
			if (*(c + count) == *(inp + i))
			{
				c[count] = out[i];
				break;
			}
			i++;
		}
		count++;
	}
	return (c);
}
