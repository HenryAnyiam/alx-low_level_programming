#include "search_algos.h"

/**
 * search - use interpolation search
 * @array: array
 * @lo: start index
 * @hi: end index
 * @value: value to search
 * )
 * Return: value index or -1
 */
int search(int *array, int lo, int hi, int value)
{
	int pos;

	pos = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
			* (value - array[lo]));
	if (pos <= hi)
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
	else
	{
		printf("Value checked array[%d] is out of range\n", pos);
		return (-1);
	}
	if (array[pos] == value)
		return (pos);
	if (array[pos] < value)
		return (search(array, (pos + 1), hi, value));
	if (array[pos] > value)
		return (search(array, lo, (pos + 1), value));
	return (-1);
}

/**
 * interpolation_search - search through an array for a value
 * @array: array
 * @size: size of array
 * @value: value to search for
 * )
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int lo, hi, index;

	if (array == NULL)
		return (-1);
	lo = 0;
	hi = size - 1;
	index = search(array, lo, hi, value);
	return (index);
}
