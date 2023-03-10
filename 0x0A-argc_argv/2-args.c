#include <stdio.h>
#include "main.h"


/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: arguments
 *
 *Return: always 0 on success
 *
 */

int main(int argc, char *argv[])
{
/* declare variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - Print each argument*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
