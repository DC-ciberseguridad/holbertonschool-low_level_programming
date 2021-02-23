#include "holberton.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */

char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s = s + j;
			return (s);
		}
	}
	return ('\0');
}
