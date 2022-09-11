#include <stdio.h>
/**
 * main - entry point
 *
 * Description: it prints all possible
 * different combination of two digits
 * seprated by comma and space
 * Return: 0 Always
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{

			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}
