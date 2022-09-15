#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 n=but not 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '4' && c != '2')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
