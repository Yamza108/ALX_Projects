#include "main.h"
#include <stdio.h>


/**
 * set_bit - sets bit value at given index
 * @n: Pointer to the bit
 * @index: index to set value at
 * Return: if fails -1, otherwise 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	*n ^= (1 << index);

	return (1);
}
