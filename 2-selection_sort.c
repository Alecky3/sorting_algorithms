#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * the 'Selection sort' algorithm
 * @array: the array to sort
 * @size: size of the array
 * Retrun: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i; j < size; j++)
			if (array[j] < array[min])
			{
				min = j;
			}
		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
