#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate the factorial of a number
 * @n: the number to calculate the factorial
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
