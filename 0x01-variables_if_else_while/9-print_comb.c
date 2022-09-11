#include <stdio.h>
/**
 * main - my entry point
 *
 * Description: it prints all possible
 * combination of single digits
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
