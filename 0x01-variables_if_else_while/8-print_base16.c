#include <stdio.h>
/**
 * main - entry point
 *
 * Description: its prints all
 * hexadecimal numbers
 * Return: 0 always
 */
int main(void)
{

	int i;
	char alpha;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (alpha = 'a'; alpha < 'g'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}

