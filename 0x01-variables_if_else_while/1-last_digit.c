#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of my program
 * @ n: an integer
 *
 * Descrription: its prints out the
 * last number of a given number
 * and check through certain No
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (((n % 10) < 6) && (n % 10) != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("last digit of %d is %d and is 0\n", n, n % 10);

	return (0);

}
