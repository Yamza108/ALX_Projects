#include "main.h"
#include <stdio.h>


/**
 * get_endianness - checks the endianness.
 *
 * Return: if big_endian - 0, otherwise 1.
 */
int get_endianness(void)
{
	int nmbr = 1;
	char *endian = (char *)&nmbr;

	if (*endian == 1)
	return (1);

	return (0);
}
