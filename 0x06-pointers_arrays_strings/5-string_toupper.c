#include "holberton.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  *
  * Return: char var
  */

char *string_toupper(char *p)
{
	int a;

for (a = 0; p[a]; a++)
{
	if (p[a] >= 97 && p[a] <= 122)
	{
		p[a] = p[a] - 32;
	}
}
	return (p);
}
