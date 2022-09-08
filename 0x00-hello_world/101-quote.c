#include <stdio.h>
#include <unistd.h>
/**
 * main - prints out last paart of a code to standard error
 * return: 1 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
