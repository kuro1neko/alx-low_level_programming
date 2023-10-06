#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks for an non-digit char
 * @s: evaluated string
 *
 * Return: 0 if a non-digit is found, 1 if not
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: the evaluated string
 *
 * Return: string's length
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lg1, lg2, lg, a, carry, dg1, dg2, *r, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lg1 = _strlen(s1);
	lg2 = _strlen(s2);
	lg = lg1 + lg2 + 1;
	r = malloc(sizeof(int) * lg);
	if (!r)
		return (1);
	for (a = 0; a <= lg1 + lg2; a++)
		r[a] = 0;
	for (lg1 = lg1 - 1; lg1 >= 0; lg1--)
	{
		dg1 = s1[lg1] - '0';
		carry = 0;
		for (lg2 = _strlen(s2) - 1; lg2 >= 0; lg2--)
		{
			dg2 = s2[lg2] - '0';
			carry += r[lg1 + lg2 + 1] + (dg1 * dg2);
			r[lg1 + lg2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			r[lg1 + lg2 + 1] += carry;
	}
	for (a = 0; a < lg - 1; a++)
	{
		if (r[a])
			b = 1;
		if (b)
			_putchar(r[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
