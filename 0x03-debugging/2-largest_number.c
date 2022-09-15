#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 *
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (largest < b)
	{
		largest = b;
		if (largest < c)
			largest = c;
	}

	return (largest);
}
