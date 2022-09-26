#include "main.h"
/**
 * _memcpy - copy memory add
 * @dest: destination
 * @src: copy source
 * @n: bytes of memory to copy
 *
 * Return: pointer to modify string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
