#include "main.h"
/**
 * print_sign - prints the sign of a given number
 * @n: the interger to be tested
 *
 * Return: 1, 0, -1 when greater than 0, if zero, less zero respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
