#include "holberton.h"
#include "stdio.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;


	for (i = 0; dest[i]; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
