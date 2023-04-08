#include "main.h"
#include <stdio.h>


/**
 * clear_bit - sets bit value to zero
 * @n: pointer to bit
 * @index: index to set the value at
 * Return: if fails -1, otherwise 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	*n &= ~(1 << index);

	return (1);
}
