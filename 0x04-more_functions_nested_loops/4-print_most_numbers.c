#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 n=but not 2 and 4
 *
 * Description: prints numbers from 0 to 9 wthout
 * 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '9' && num != '2')
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
