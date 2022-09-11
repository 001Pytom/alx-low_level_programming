#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints combination
 * of 3 digits separated by comma and space
 * Return: 0 always
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
