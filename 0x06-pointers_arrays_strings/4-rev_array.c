#include "holberton.h"
#include "stdio.h"

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */

void reverse_array(int *a, int n)
{
        int *ar, i, j, c;
	
		ar = a;
		
        for (i = 1; i < n; i++)
        {
			ar++;
		}

        for (c = 0; c < i / 2; c++)
        {
                j = a[c];
                a[c] = *ar;
                *ar = j;
                ar--;
        }
}
