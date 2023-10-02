#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the converted string
 *
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, d, n, l, f, dg;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	dg = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dg = s[i] - '0';
			if (d % 2)
				dg = -dg;
			n = n * 10 + dg;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two nums
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: if succes 0, if error  1
 */
int main(int argc, char *argv[])
{
	int r, nb1, nb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = _atoi(argv[1]);
	nb2 = _atoi(argv[2]);
	r = nb1 * nb2;

	printf("%d\n", r);

	return (0);
}
