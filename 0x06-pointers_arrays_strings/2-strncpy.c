#include "main.h"

/**
 * _strncpy - Copies some bytes from the source pointer to the destination
 * @dest: Destination pointer
 * @src: Source pointer
 * @n: Number of bytes to be copied
 * Return: pointer tho the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
