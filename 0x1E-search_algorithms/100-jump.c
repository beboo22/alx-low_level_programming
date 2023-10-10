#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int prev = 0;
	int i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[step] < value && step < (int)size)
	{
		prev = step;
		step += (int)sqrt(size);
		if (prev >= (int)size)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (i = prev; i <= (step < (int)size ? step : (int)size - 1); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
