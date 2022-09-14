#include "main"
/**
 * print_last_digit - it prints the last digit of a number
 * @n: the integer to be tested
 *
 * Return: 0 if exited
 */
int print_last_digit(int)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
}
