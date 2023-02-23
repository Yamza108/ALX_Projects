#include "main.h"
#include <unistd.h>
#include <stdio.h>


/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers exl=cluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 0; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	putchar(x + '0');
	}
	}
	putchar('\n');
}
