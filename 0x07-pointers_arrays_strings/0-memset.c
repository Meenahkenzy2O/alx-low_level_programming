#include "main.h"
/**
* _memset - Entry point 
* * @s: pointed destination
*  @b: constant byte
*   @n: bytes 
*   Return: Always (Success)
*
*   */
char_memset(char *s, char b, unsigned int n) 
{
       	unsigned int i; 
	for (i=0; i < n; i++)
	       	s[1] = b;
       	return (s);
}
