#include <stdio.h>
/**
 * print_array - prints the first n elements of an array
 * @a: input array
 * @n: number of elements
 *
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
