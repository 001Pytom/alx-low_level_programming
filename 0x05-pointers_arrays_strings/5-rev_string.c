#include "main.h"
/**
 * rev_string - prints a string in reveerse
 *@s: this points to the string
 *
 */
void rev_string(char *s)
{
	int a, len;

	char *begin, *end = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0' ; a++)
	{
		end++;
	}
	len = a + 1;
	begin = s;
	for (a = 0; a < len / 2; a++)
	{
		char x;

		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
}
