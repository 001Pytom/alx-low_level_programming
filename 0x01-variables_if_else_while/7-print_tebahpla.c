#include <stdio.h>
/**
 * main - entry point
 *
 * Description: it prints the alphabets
 * in reverse manner
 * Return: 0 always
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');

	return (0);
}
