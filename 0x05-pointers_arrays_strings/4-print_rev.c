#include "holberton.h"

/**
 * print_rev - Entry point
 * @s: pointer the sstring we want to print
 *Return: no return
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(*(s + i - 1));
		i--;
	}

	_putchar('\n');
}
