#include "holberton.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */

int _strcmp(char *s1, char *s2)
{
	int i, j, c = 0, r = 0, lim;

	for (i = 0; s1[i]; i++)
	{}


	for (j = 0; s2[j]; j++)
	{}

	if (i <= j)
	{
		lim = i;
	}
	else
	{
		lim = j;
	}

	for (c = 0; c <= lim; c++)
	{
		if (s1[c] == s2[c])
		{
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}
	}

	return (r);
}
