#include "main.h"
/**
 * _islower - checks for lower case
 *
 * Return: 1 if lower
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
