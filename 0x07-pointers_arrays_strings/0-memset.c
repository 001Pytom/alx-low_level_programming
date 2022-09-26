#include "main.h"
/**
 * _memset - memory fills with constant byte
 * @s: pointer to string
 * @b: byte
 * @n: integer numb
 *
 * Return: pointer to modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
