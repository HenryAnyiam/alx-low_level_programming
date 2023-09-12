#include "search_algos.h"

/**
 * binary_search - searches an array for a value
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * )
 * Return: indexof value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, mid;
	int head = 0, tail = size - 1;

	if (array == NULL)
		return (-1);
	while (head < tail)
	{
		printf("Searching in array: ");
		for (i = head; i < tail; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[tail]);
		mid = (head + tail) / 2;
		if (value < array[mid])
			tail = mid - 1;
		else if (value > array[mid])
			head = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
