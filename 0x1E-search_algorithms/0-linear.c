#include "search_algos.h"

/**
 * linear search for an element in an array
 * size is the number of elements in array
 * And value is the value to search for
 * Your function must return the first index where value is located
 * If value is not present in array or if array is NULL, your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (!array || size == 0)
		return (-1)
	for (i=0; i< size;i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
