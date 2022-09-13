#include "main.h"
/**
 * _isalpha - checks if its a letter,lower or uppercase
 *@c: the params im testing
 *
 * Return: 1 if c is true
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
