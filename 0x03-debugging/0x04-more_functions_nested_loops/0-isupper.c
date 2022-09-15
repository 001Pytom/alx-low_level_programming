#include "main.h"
/**
 * _isupper - it checks for upper case
 * @c: the interge to be checked
 * Return: 1 if c is uppercase
 * Return 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
