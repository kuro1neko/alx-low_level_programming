#include <stdio.h>
#include "main.h"

/**
 * _putchar - write character to stdout
 * @c: the printed character
 *
 * Return: if succes 1 , if error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
