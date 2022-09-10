#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - my entry point
 * @ n: the integer
 *
 * it prints the letter in uppercase
 * and lower case
 * Return: 0 always
 */
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
