#include "main.h"
/**
 * _strncmp - compares two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 if both equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
