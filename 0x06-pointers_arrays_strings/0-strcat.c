#include "main.h"
/**
 * _strcat - it concatenates twoo strings
 * @dest: The output
 * @src: the input
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
