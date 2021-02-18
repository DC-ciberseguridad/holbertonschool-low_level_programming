#include "holberton.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{}

	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
