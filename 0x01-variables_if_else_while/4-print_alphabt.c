#include <stdio.h>
/**
 * main - my entry point
 * @my_letter: my main variable
 *
 * its excludes q and e from
 * standard letters
 * Return: 0 always 
 */
int main(void)
{
	char my_letter;

	for (my_letter = 'a'; my_letter <= 'z'; my_letter++)
		if ((my_letter != 'q') and (my_letter != 'e'))
			putchar(my_letter);

	putchar('\n');
	
	return (0);
}
