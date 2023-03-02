#include "main.h"


/**
 * reserve_array - Reserve the content of an array of integers
 * @a: an array of integers to be reversed.
 * @n: the number of elements in the array
 *
 */

void reserve_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
