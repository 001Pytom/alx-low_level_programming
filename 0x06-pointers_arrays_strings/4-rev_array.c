#include "main.h"
/**
 * reverse_array - a function that reverse an array.
 * @a: input
 * @n: number of elemet of array
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int me;

	while (i < n--)
	{
		me = a[i];
		a[i++] = a[n];
		a[n] = me;
	}
}
