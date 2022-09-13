#include "main.h"
/**
 * _abs - function that computes the absolute value of a number
 * @n: the interger that hold the values
 *
 * Return: 0 when successful
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n > 0)
		return (n);
	else
		return (0);
}
