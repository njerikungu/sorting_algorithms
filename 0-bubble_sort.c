#include "sort.h"

/**
 * bubble sort - sorts an  arrray of integers
 * @size: size of the array
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, new;
	int tmp, swap;

	for (new = size, swap = 1; new > 0 && swap; new--)
	{
		swap = 0;
		for (i = 0; (i + 1) < new; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
