#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_binary - Prints binary rep of a number
 * @n: Number to be printed
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	putchar((n & 1) + '0');
}
