#include <stdio.h>

/**
  *main - prints fibonacci sequence
  *Return: 0 to end main
  */
int main(void)
{
	long a;
	long b;
	long i;
	int sum;

	i = 0;
	a = 1;
	b = 2;
	while (i <= 48)
	{
		printf("%li, %li", a, b);
		a = a + b;
		b = a + b;
		if (i != 48)
			printf(", ");
		++i;
	}
	sum = '\n';
	putchar(sum);
	return (0);
}
