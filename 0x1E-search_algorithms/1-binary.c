#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * binary_search - function that searches for a value in a sorted array of integers using the Binary search algorithm.
 * 
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in an array.
 * @value: value to search for.
 * Return: -1 if array is NULL or value not found, index of the value otherwise.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m;
	size_t l = 0;
	size_t r = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);		
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}		
	}
	return (-1);
}
