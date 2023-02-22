#include <stdio.h>

/**
  *main - prints fibonacci sequence
  *Return: 0 to end main
  */
int main(void)
{
	long a;
	long b;
	int sum;

	a = 2;
	b = 4;
	while (b <= 4000000)
	{
		printf("%li, %li", a, b);
		a = a + b;
		b = a + b;
		if (i != 24)
			printf(", ");
	}
	sum = '\n';
	putchar(sum);
	return (0);
}
