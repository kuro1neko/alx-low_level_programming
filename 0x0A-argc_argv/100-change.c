#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins to make change for amount of money
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: if succes 0, if error 1
 */
int main(int argc, char *argv[])
{
	int nbr, j, r;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbr = atoi(argv[1]);
	r = 0;

	if (nbr < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && nbr >= 0; j++)
	{
		while (nbr >= c[j])
		{
			r++;
			nbr -= c[j];
		}
	}

	printf("%d\n", r);
	return (0);
}
