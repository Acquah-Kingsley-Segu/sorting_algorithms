#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int temp, swap = 0;
	long unsigned int inner, outer;

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
