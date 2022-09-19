#include "main.h"
/**
 * _strcpy - copies string to a given memory location
 * @dest: the buffer point
 * @src: location of the string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
