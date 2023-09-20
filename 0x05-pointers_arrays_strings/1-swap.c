#include "main.h"
/**
 * swap_int - Swaps the referenced values of two pointers
 * @a: first pointer
 * @b: second pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
