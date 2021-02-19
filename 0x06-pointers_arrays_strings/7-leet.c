#include "holberton.h"

/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  *
  * Return: The encoded string
  */

char *leet(char *s)
{
	int a, b, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	for (a = 0; s[a]; a++)
	{
		b = 0;

		for (b = 0; b < l; b++)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
			{
				s[a] = n[b];
			}
		}
	}
	return (s);
}
