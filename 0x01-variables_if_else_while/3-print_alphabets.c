#include <stdio.h>
/**
 * main - my entry point
 * @ letter: my character
 *
 * its prints outupper and loer case
 * Return: 0 always
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
