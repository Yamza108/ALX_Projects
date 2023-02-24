#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal lines according parameter
 * @n: The number of times to print diagonal lines
 * Return: empty
 */

void print_diagonal(int n)

{
	int x, y;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	putchar(32);
	}
	putchar(92);
	putchar('\n');
	}
	}
}
