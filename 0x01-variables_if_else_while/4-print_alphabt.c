#include <stdio.h>
/**
 * main - my entry point
 * @letter: first declaration
 *
 * Description: all leters and excludes q and e
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
