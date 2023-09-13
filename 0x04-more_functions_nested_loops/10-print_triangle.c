#include "main.h"

/**
 * print_triangle - Prints an equilateral triangle
 * @size: this width of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int s;
	int h = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		s = size - 1 - i;
		h = i + 1;
		for (j = 0; j < size; j++)
		{
			if (s > 0)
			{
				_putchar(' ');
				s--;
			}
			else if (h > 0)
			{
				_putchar('#');
				h--;
			}
		}
		_putchar('\n');
	}
}
