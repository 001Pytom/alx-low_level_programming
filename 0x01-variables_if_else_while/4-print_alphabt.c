#include <stdio.h>
/**
 * main - my entry point
 * @letter: my main variable
 *
 * all leters and excludes q and e
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
