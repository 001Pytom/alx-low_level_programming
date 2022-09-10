#include <stdio.h>
/**
 * main - my entry point
 * @my_letter: my main variable
 *
 * its excludes q and e from
 * standard letters
 * Return: 0 always. 
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	putchar('\n');
	return (0);
}
