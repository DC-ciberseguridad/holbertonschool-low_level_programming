#include "holberton.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; i[s]; i++)
	{
		for (j = 0; j[accept]; j++)
		{
			if (i[s] == j[accept])
			{
				s = s + i;
				return (s);
			}
		}
	}

return ('\0');
}
