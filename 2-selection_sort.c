#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @n1: The first integer to swap.
 * @n2: The second integer to swap.
 */
void swap_ints(int *n1, int *n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

/**
 * selection_sort - selection sort
 *
 * @array: The array
 * @size: size is array
 */
void selection_sort(int *array, size_t size)
{
	int *min_pos;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_pos = array + i;
		for (j = i + 1; j < size; j++)
			min_pos = (array[j] < *min_pos) ? (array + j) : min_pos;

		if ((array + i) != min_pos)
		{
			swap_ints(array + i, min_pos);
			print_array(array, min_pos);
		}
	}
}
