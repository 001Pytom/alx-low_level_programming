#include "main.h"
/**
 * _islower - checks for lower case
 *@c: letter i am testing
 *
 * Return: 1 if lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
