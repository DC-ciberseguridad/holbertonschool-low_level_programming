#include "holberton.h"
#include <stdio.h>

/**
  * cap_string - ...
  * @s: ...
  *
  * Return: char value
  */

char *cap_string(char *s)
{
	int a, i;
	int c = 13;
	char arr[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

for (a = 0 ; s[a]; a++)
{
	for (i = 0; i < c; i++)
	{
		if ((a == 0 || s[a - 1] == arr[i]) && (s[a] >= 97 && s[a] <= 122))
		{
			s[a] = s[a] - 32;
		}
	}
}
	return (s);
}
