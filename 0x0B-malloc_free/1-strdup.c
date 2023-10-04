#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory
 * @str: character
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *dp;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	dp = malloc(sizeof(char) * (j + 1));

	if (dp == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dp[r] = str[r];

	return (dp);
}
