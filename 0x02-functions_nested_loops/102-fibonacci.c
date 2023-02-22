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
	while (i <= 25)
	{
		printf("%d,%d,", a, b);
		a = a + b;
		b = a + b;
	}
	sum = '\n';
	putchar(sum);
	return (0);
}
