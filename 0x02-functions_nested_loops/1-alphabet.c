#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: it prints all alphabet
 * in llower case using _putchar
 * Return: 0 when successful
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
