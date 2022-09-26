#include "main.h"
/**
 * _strchr - function locates the char in string
 * @s: string searched
 * @c: char searched
 *
 * Return: pointer to c and NULL otherwise
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
