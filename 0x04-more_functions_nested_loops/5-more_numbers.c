#include "main.h"
/**
 * more_numbers - output 10 times the number from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int real, num;

	for (real = 0; real <= 9; real++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10 && num <= 14)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
