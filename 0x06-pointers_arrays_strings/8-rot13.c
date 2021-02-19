#include "holberton.h"
#include <stdio.h>

/**
  * rot13 - ...
  * @s: ...
  *
  * Return: ...
  */

char *rot13(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] = s[a] - 13;
				break;
			}

			s[a] = s[a] + 13;
			break;
		}
	}

	return (s);
}
