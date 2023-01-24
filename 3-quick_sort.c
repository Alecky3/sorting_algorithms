#include "sort.h"

/**
 * quick_sort - sorts an array  in ascending order using the
 * 'Quick sort' algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	_quick_sort(array, 0, size - 1, size);
}

/**
 * partition - partitions the array
 * @array: array to patition
 * @first: lower index
 * @last: upper index
 * @size: size of the array
 * Return: the higher index of the range
 */
int partition(int *array, int first, int last, size_t size)
{
	int i = first - 1, j = first;
	int pivot = array[last], aux = 0;

	for (; j < last; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[last])
	{
		aux = array[i + 1];
		array[i + 1] = array[last];
		array[last] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * _quick_sort - perform the actual quick sort
 * @array: the array to sort
 * @first: lower index
 * @last: upper index
 * @size: size of the array
 * Return: void
 */
void _quick_sort(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		_quick_sort(array, first, pivot - 1, size);
		_quick_sort(array, pivot + 1, last, size);
	}
}
