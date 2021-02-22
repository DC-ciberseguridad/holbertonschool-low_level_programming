#include "holberton.h"

/**
  * _memcpy - copy memory area, Copy contents of src[] to dest[]
  * @dest: dest memory area
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: memory area replaced
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
