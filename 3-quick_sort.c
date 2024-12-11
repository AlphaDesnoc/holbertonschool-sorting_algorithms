#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort.
 * @array: Pointer to the array to sort.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}

