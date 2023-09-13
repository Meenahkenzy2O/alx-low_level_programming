#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long int a = 1;
	unsigned long int c;
	unsigned long int b = 2;

	printf("%lu, ", a);
	for (i = 0; i < 96; i++)
	{
		printf("%lu, ", b);
		c = a;
		a = b;
		b = c + a;
	}
	printf("%lu\n", b);
	return (0);
}
