#include "holberton.h"

/**
 * print_alphabet to print abc
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);	
}
_putchar('\n');
return (0);
}
