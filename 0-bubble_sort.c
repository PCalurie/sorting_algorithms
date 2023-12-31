#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in an ascending order
 * @array: pointer to the array to be sorted
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	/* no of items to iterate over the array*/
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		/* check if any swaps occurred in the iteration*/

		/*Compare and swap the adjacent elements*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/*Swap the two elements*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; /*Set a swapped flag*/
				print_array(array, size);
			}
		}

		/*If no swaps occurred, the array is already sorted*/
		if (swapped == 0)
		{
			return;
		}
	}
}
