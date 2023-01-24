#include "sort.h"

/**
 * _quick_sort - sorts an array of integers recursively
 * @array: array to sort
 * @first: first element
 * @last: last element
 * @size: size of the array
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
