#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: a pointer to the array which is sorted
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t x, y;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < (size - 1); x++)
		{
			if (array[x] > array[x + 1])
			{
				swap = array[x];
				array[x] = array[x + 1];
				array[x + 1] = swap;
				print_array(array, size);
			}
		}
	}

}
