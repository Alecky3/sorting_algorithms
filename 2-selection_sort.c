#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using selection sort algorithm.
 *
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
