#include "main.h"
/**
 * print_numbers - print numbers from
 * 0 to 9 with new line
 * @num: the numbers
 *
 * Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
