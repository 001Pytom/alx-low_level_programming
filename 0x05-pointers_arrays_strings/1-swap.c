#include "main.h"
/**
 * swap_int - swaps the values of two integer
 * @a: first pointer argument
 * @b: second pointer argument
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
