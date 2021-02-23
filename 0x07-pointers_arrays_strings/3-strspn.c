#include "holberton.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i, j, n = 0;

	for (i = 0; i[accept]; i++)
	{
		for (j = 0; j[s] != 32; j++)
		{
			if (i[accept] == j[s])
			{
				n++;
			}
		}
	}
	return (n);
}
