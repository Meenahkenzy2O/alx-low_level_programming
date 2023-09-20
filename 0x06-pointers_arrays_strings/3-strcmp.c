#include "main.h"

/**
 * _strcmp - Compares two in put strings
 * @s1: the first string
 * @s2: the second
 * Return: positive or negative in or zero
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ret = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] > s2[i])
		{
			ret = s1[i] - s2[i];
			break;
		}
		else
		{
			ret = s1[i] - s2[i];
			break;
		}
	}
	return (ret);
}
