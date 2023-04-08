#include "main.h"
#include <stdio.h>


/**
 * flip_bits - number of bits to be flipped
 * @n: The number
 * @m: the number to flip n to
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
	bits += (xor & 1);
	xor >>= 1;
	}
	return (bits);
}
