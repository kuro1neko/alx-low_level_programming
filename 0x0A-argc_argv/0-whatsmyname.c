#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's name
 * @argc: argument's num
 * @argv: argument's array
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
