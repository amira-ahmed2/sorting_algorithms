#include "sort.h"

/**
 * selection_sort - selection sort
 *
 * @array: The array
 * @size: size is array
 */
void selection_sort(int *array, size_t size)
{

	int *minpos;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minpos = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *minpos)
				minpos = array + j;
			else
				minpos = minpos;
		}

		if ((array + i) != minpos)
		{
			swap_ints(array + i, minpos);
			print_array(array, size);
		}
	}
}
