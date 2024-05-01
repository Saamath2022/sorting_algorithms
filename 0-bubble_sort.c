#include "sort.h"
#include <stdio.h>

/*
 * bubble_sort - Sorts an array of integers using Bubble sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;

	while (i < size - 1)
	{
		size_t j = 0;

		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				 int temp = array[j];

				 array[j] = array[j + 1];
				 array[j + 1] = temp;

				 size_t k = 0;

				 while (k < size)
				 {
					 printf("%d ", array[k]);
					 k++;
				 }
				 printf("\n");
			}
			j++;
		}
		i++;
	}
}

