#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 * Return: no return
 */
void quick_sort(int *array, size_t size)
{
	qsort(array, 0, size - 1, size);
}
/**
 * qsort - quick_sort function
 * @a: input arrray
 * @low: index for the first element
 * @high: index for the last element
 * @size: size of the array
 * Return: no return
 */
void qsort(int *a, int low, int high, int size)
{
	int p, w, i;
	int tmp;

	if (low < high)
	{
		p = high;
		w = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[p])
			{
				if (i != w)
				{
					tmp = a[i];
					a[i] = a[w];
					a[w] = tmp;
					print_array(a, size);
				}
				w++;
			}
		}
		if (w != p && a[w] != a[p])
		{
			tmp = a[w];
			a[w] = a[p];
			a[p] = tmp;
			print_array(a, size);
		}
		qsort(a, low, w - 1, size);
		qsort(a, w + 1, high, size);
	}
}
