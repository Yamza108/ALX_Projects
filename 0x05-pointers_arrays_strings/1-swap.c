#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swappped.
 * @b: The second integer to be swapped.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
