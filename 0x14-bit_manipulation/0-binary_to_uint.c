#include "main.h"

/**
 * binary_to_uint - converts binaray number into unsigned int
 * @b: string containing binary number
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dcml_val = 0;

	if (!b)
	return (0);

	for (i = 0; b[i]; i++)
	{
	if (b[i] < '0' || b[i] > 'i')
	return (0);
	dcml_val = 2 * dcml_val + (b[i] - '0');
	}
	return (dcml_val);
}
