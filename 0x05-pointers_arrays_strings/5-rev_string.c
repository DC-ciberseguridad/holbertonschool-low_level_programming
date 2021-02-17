#include "holberton.h"

/**
 *rev_string - Entry point
 *@s: pointer the string we want to change
 *Return: no return
 */

void rev_string(char *s)
{
	int i, c, j;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{}

	j = i - 1;

	for (c = 0; c < (i / 2); c++)
	{
		ch = s[j];
		s[j] = s[c];
		s[c] = ch;
		j--;
	}
}
