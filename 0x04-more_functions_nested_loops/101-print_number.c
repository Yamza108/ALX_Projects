#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */

void print_number(int n)
{
	int divisor;

	if (n < 0)
	{
	putchar('-');
	n = -n;
	}

	divisor = 1;

	while (n / divisor >= 10)
	divisor *= 10;

	while (divisor != 0)
	{
	int digit = n / divisor;

	putchar(digit + '0');
	n %= divisor;
	divisor /= 10;
	}
}


