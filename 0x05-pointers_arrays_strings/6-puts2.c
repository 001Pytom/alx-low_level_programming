#include "main.h"
/**
 * puts2 - prints evry other character of a given string
 * @str: passed string pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int f;

	for (f = 0; str[f] != '\0' ; f++)
	{
		if (f % 2 == 0)
		{
			_putchar(str[f]);
		}
	}
	_putchar('\n');
}
