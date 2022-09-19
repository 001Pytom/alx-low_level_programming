#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: this takesvalue of input
 *
 */
void print_rev(char *s)
{
	int word;

	for (word = 0; s[word] != '\0' ; word++)
		;
	for (word = word - 1; s[word] != '\0' ; word--)
	{
		_putchar(s[word]);
	}
	_putchar('\n');
}
