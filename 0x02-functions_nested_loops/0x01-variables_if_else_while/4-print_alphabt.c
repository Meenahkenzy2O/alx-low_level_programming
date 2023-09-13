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
		if (i == 'q' || i == 'e')
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');

	return (0);
}
