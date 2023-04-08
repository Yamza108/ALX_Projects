#include "main.h"
#include <stdio.h>


/**
 * get_bit - gets bit value at given index
 * @n: bit
 * @index: index to get value
 * Return: if fails -1, otherwise bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);

	if ((n & (1 << index)) == 0)
	return (0);

	return (1);
}
