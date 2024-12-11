#include "sort.h"

/**
 * quick_sort_helper - Recursively applies quicksort.
 * @array: Pointer to the array.
 * @low: Starting index of the portion to sort.
 * @high: Ending index of the portion to sort.
 * @size: Size of the array.
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		quick_sort_helper(array, low, pi - 1, size);
		quick_sort_helper(array, pi + 1, high, size);
	}
}

