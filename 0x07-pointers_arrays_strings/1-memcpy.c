#include "main.h"
/**
  * _memcpy - Entry point
  * @dest: destination to copy to
  * @src: source to copy from
  * @n: bytes to copy
  * Return: destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src != NULL)
	{
	dest[i] = src[i];
		i++;
	}
	return (dest);
}
