#include "search_algos.h"

/**
 * linear_search - searches an array for a value
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * )
 * Return: indexof value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i, len = size;

	if (array == NULL)
		return (-1);

	for (i = 0; i < len; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
