#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * @n: the integer to be tested
 *
 * Return: n
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
}
