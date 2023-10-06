#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, lg1 = 0, lg2 = 0;

	while (s1 && s1[lg1])
		lg1++;
	while (s2 && s2[lg2])
		lg2++;

	if (n < lg2)
		s = malloc(sizeof(char) * (lg1 + n + 1));
	else
		s = malloc(sizeof(char) * (lg1 + lg2 + 1));

	if (!s)
		return (NULL);

	while (a < lg1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < lg2 && a < (lg2 + n))
		s[a++] = s2[b++];

	while (n >= lg2 && a < (lg1 + lg2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
