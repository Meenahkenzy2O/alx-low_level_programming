#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Prints the reverse of a string
 * @str1: pointer to the string
 * Return: nothing
 */
void rev_string(char *str1)
{
	int i, len, temp;

	len = _strlen(str1);
	for (i = 0; i < len / 2; i++)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
	}
}
