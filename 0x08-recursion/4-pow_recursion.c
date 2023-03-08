#include "main.h"
#include <stdio.h>


/**
 * _pow_recursion - returns the value of x raised to
 * the power of y
 * @x: the value to multiply
 * @y: the times to multiply the value
 * Return: the value multiplied y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
