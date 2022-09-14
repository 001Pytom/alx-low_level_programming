#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int tot = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			tot += i;
		else if (i % 5 == 0)
			tot += i;

		i++;
	}
	printf("%d\n", tot);

	return (0);
}
