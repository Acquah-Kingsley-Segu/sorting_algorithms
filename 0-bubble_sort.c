#include "sort.h"

/**
 * bubble_sort - Implements bubble sort algorithm
 *
 * @array: array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int temp, swap = 0;
	unsigned long int inner, outer;

	if (size <= 1)
		return;
	for (outer = 0; outer < size; outer++)
	{
		for (inner = 0; inner < size - outer; inner++)
		{
			if (array[inner] < array[inner + 1])
				continue;
			temp = array[inner];
			array[inner] = array[inner + 1];
			array[inner + 1] = temp;
			swap = 1;
			print_array(array, size);
		}
		if (!swap)
			break;
	}
}
