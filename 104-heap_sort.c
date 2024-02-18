#include "sort.h"

void sift_down(int *array, size_t start, size_t end, size_t size);
void swap_elem(int *arr, size_t size, int *a, int *b);


/**
 * sift_down - Builds heap form bottom up
 *
 * @array: List to be sorted
 * @start: Subscript of the root ot the heap
 * @size: Size of array
 * @end: Subscript of the last element of the heap
 */
void sift_down(int *array, size_t start, size_t end, size_t size)
{
	size_t root, child, swap;

	root = start;

	while ((root * 2) + 1 <= end)
	{
		/* Subscript of left child */
		child = (root * 2) + 1;
		swap = root;

		if (array[swap] < array[child])
		{
			/* Swap root and left child */
			swap = child;
		}
		if (child + 1 <= end && array[swap] < array[child + 1])
		{
			/* Swap root with right child */
			swap = child + 1;
		}
		/* If one child is greater than other */
		if (swap != root)
		{
			swap_elem(array, size, &array[root], &array[swap]);
			root = swap;
		}
		else
		{
			return;
		}
	}
