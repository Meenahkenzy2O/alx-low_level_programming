#include<stdio.h>
/**
 * main - This is a description
 * Return: Always 0
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*s)
		putchar(*s++);

	return (1);
}
