#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor
 * )
 * Return: 0
 */
int main(void)
{
	long i, max, num = 612852475143;
	double sqr = sqrt(num);

	for (i = 1; i <= sqr; i++)
	{
		if (num % i == 0)
			max = num / i;
	}
	printf("%ld\n", max);
	return (0);
}
