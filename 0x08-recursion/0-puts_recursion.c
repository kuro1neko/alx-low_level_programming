#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to the string to print
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
