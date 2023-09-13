#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	i = 'A';
	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
