#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long int sum = 0;
	unsigned long int a = 1;
	unsigned long int c;
	unsigned long int b = 2;

	for (i = 0; i < 48; i++)
	{
		if (b <= 4000000)
		{
			if (b % 2 == 0)
				sum += b;
		}
		else
			break;
		c = a;
		a = b;
		b = c + a;
	}
	printf("%ld\n", sum);
	return (0);
}
