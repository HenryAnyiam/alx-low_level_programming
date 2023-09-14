#include "search_algos.h"

/**
 * jump_search - search through sorted array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * )
 * Return: index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev = 0, length;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	length = size;
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while ((step < length) && (array[step] < value))
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (prev < length)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
