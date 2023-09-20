#include "main.h"

/**
 * _strncat - Concatenates part of a string to another
 * @dest: Destination  string
 * @src: Source string
 * @n: Number of bytes to be used fron the source string
 * Return: pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
