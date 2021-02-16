#include "holberton.h"

/**
 *swap_int - Entry point
 *@a: pointer the integer we want to swap
 *@b: pointer the integer we want to swap
 *
 *Return: no return
 */

void swap_int(int *a, int *b)
{

	int c = *a;
	int d = *b;
	*b = c;
	*a = d;

}
