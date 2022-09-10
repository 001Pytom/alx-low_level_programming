#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point ofmy program
 * @ n: an integer n
 *
 * Description: This program will tell
 * if number entered is poitive or
 * negtive or zero
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
