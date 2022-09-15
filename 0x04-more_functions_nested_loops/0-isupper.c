#include "main.h"
/**
 * _isupper - it checks for uppercase
 *
 * @c: the number to be checked
 * Return: 1 if c is upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
