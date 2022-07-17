#include "sort.h"

/**
 * bubble_sort - implement buble sort algorithm
 * @array: array to sort
 * @size: size of array passed
 *
 */

void bubble_sort(int *array, size_t size)
{
	int temp, swap = 0;
	unsigned long int outer, inner;

	if (array == NULL)
		return;
	for (outer = 0; outer < size - 1; outer++)
	{
		for (inner = 0; inner < size - outer - 1; inner++)
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
