
#include <stdio.h>
#include "sort.h"

/**
 * swap_two_num - Swap two integers in an array.
 * @n1: The first integer to swap.
 * @n2: The second integer to swap.
 */
void swap_two_num(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

/**
 * bubble_sort - bubble_sort
 *
 * @array: The array
 * @size: size is array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool flags = false;
    
    if (array == NULL || size < 2)
		return;
	
	while (flags == false)
	{
	    flags = true;
	    for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_two_num(array + i, array + i + 1);
				print_array(array, size);
				flags = false;
            }
        }
        len--;   
	}
}
