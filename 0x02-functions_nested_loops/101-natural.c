#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Prints the sum of natural numbers
 * less than 1024 that are multible of 3 or 5
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
