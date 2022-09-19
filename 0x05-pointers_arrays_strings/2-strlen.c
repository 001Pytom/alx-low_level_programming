#include "main.h"
/**
 * _strlen - it returns the length of a string
 * @s: the word being tested
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0' ; len++)
		;
	return (len);
}
