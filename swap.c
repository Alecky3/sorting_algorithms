#include "sort.h"

/**
 * swap - swaps two elements of an array
 * @a: the first element
 * @b: the second element
 * Return: void
 */

void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
