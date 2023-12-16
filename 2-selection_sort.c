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

	int i, j, minpos;
	
	if (array == NULL || size < 2)
		return;
	
	for (i = 0; i < size - 1; i++)
	{
		minpos = i;
		for (j = i + 1; j <size; j++)
		{
			if (array[j] < array[minpos])
				minpos = j;
		}
		if (minpos != i)
		{
			swap_two(array + i, array + minpos);
			print_array(array, size);

		}
	}
}
