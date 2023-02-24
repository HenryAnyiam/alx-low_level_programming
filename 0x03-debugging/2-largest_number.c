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

    if(!(a < 0 || b < 0 || c < 0))
    {
    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
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
	    d = a * a;
	    e = b * b;
	    f = c * c;
	    if (d > e && e > f)
	    {
		    largest = a;
	    }
	    else if (e > d && d > f)
	    {
		    largest = b;
	    }
	    else
	    {
		    largest = c;
	    }
    }

    return (largest);
}
