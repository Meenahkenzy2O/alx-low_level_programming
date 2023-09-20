#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the reverse of a string
 * @a: pointer to the array
 * @n: number of elements to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n == 0)
		printf("\n\n");
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
