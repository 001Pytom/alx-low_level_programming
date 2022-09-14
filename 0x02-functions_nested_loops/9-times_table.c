#include "main.h"
/**
 * times_table - times table from 0
 *
 * Return: 0 always
 */
void times_table(void)
{
	int x, y, mul;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mul = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if ((mul < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
