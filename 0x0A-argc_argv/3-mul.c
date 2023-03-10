#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: arguments vector
 *
 *Return: 0 if true, 1 if false
 *
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc == 3)
{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
}
	else
{
	printf("Error\n");
	return (1);
}
	return (0);
}
