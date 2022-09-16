#include "main.h"
/**
 * print_line - draws a straight line
 * @n: the entry
 *
 * Description: it draws a straight line in the terminal
 * Return: void
 */
void print_line(int n)
{
	int count;

	for (count = 1; n >= 1 && count <= n; count ++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
