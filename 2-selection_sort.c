#include "sort.h"

/**
 * selection_sort - Selection Sort Algo
 * @array: int array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int temp, min_index;
	unsigned long int i, j;

	for (i = 0; i < size; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
	}
}

