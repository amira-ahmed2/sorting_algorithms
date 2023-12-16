
#include <stdio.h>
#include "sort.h"

/**
 * swap_two_num - Swap two integers in an array.
 * @n1: The first integer to swap.
 * @n2: The second integer to swap.
 */
void swap_two(int *n1, int *n2) {
	int temp = *n1;
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
	int i, j, min_postion;
	
	if (array == NULL || size < 2)
		return;
	
	for (i = 0; i < size - 1; i++)
	{
		min_postion = i;
		for (j = i + 1; j <size; j++)
		{
			if (array[j] < array[min_postion])
				min_postion = j;
		}
		if (min_postion != i)
		{
			swap_two(array + i, array + min_postion);
			print_array(array, size);

		}
	}
}
