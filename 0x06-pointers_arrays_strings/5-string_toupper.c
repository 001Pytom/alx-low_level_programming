#include "main.h"
/**
 * string_toupper - fxn that lowercase to upper case
 * @s: input
 * Return: char pointer to converted
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
