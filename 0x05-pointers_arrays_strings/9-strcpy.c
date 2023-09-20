#include "main.h"
/**
 * _strcpy - Copies string from the src to the dest
 * @src: source pointer
 * @dest: destination pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
