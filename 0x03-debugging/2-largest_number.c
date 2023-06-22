#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest, d, e, f;

	if (!(a < 0 || b < 0 || c < 0))
	{
		if (a >= b && b >= c)
		{
			largest = a;
		}
		else if (b >= a && a >= c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	else
	{
		if (a < 0 && b < 0 && c < 0)
		{
			d = -1 * a;
			e = -1 * b;
			f = -1 * c;
			if (d >= e && e >= f)
				largest = a;
			else if (e >= d && d >= f)
				largest = b;
			else
				largest = c;
		}
		else if (a < 0 && b < 0)
			largest = c;
		else if (b < 0 && c < 0)
			largest = a;
		else if (a < 0 && c < 0)
			largest = b;
		else if (a < 0)
		{
			if (b >= c)
				largest = b;
			else
				largest = c;
		}
		else if (b < 0)
		{
			if (a >= c)
				largest = a;
			else
				largest = c;
		}
		else if (c < 0)
		{
			if (a >= b)
				largest = a;
			else
				largest = b;
		}
	}

	return (largest);
}
