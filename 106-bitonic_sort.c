/* 106-bitonic_sort.c */

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bitonic_merge - Merge a bitonic sequence in increasing order
 * @array: Array to sort
 * @size: Size of the array
 * @dir: Direction of sorting (1 for increasing, 0 for decreasing)
 * @sub_size: Size of the sub-array to merge
 **/
void bitonic_merge(int *array, size_t size, int dir, size_t sub_size)
{
    if (sub_size > 1)
    {
        size_t mid = size / 2;
        size_t i;

        for (i = 0; i < mid; i++)
        {
            if ((array[i] > array[i + mid]) == dir)
            {
                int temp = array[i];
                array[i] = array[i + mid];
                array[i + mid] = temp;
                printf("Merging [%lu/%lu] (%s):\n", sub_size, size, dir ? "UP" : "DOWN");
                print_array(array, size);
            }
        }
        bitonic_merge(array, mid, dir, sub_size / 2);
        bitonic_merge(array + mid, mid, dir, sub_size / 2);
    }
}

/**
 * bitonic_sort - Sorts an array of integers in ascending order
 *                 using the Bitonic sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 **/
void bitonic_sort(int *array, size_t size)
{
    if (size > 1)
    {
        size_t mid = size / 2;

        printf("Merging [%lu/%lu] (UP):\n", size, size);
        print_array(array, size);

        bitonic_sort(array, mid);
        bitonic_sort(array + mid, mid);
        bitonic_merge(array, size, 1, size);
    }
}

