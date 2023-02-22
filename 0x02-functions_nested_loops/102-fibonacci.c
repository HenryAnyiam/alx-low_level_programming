#include <stdio.h>

/**
  *main - prints fibonacci sequence
  *Return: 0 to end main
  */
int main(void)
{
	int a;
	int b;
	int i;
	int sum;

	i = 0;
	a = 1;
	b = 2;
	sum = 0;
	while (i <= 50)
	{
		printf("%d,%d,", a, b);
		sum = b;
		b = a + b;
		a = b;
	}
	sum = '\n';
	putchar(sum);
	return (0);
}
