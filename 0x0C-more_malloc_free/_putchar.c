#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: The printed character
 *
 * Return: On success 1.
 * On error -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
