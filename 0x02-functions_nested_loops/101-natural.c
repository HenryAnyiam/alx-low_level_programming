#include <stdio.h>

/**
  *main - prints multiples of 3 and 5
  *Return: 0 to end function
  */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0)
			sum = sum + i;
		else if ((i % 5) == 0)
			sum = sum + i;
		++i
	}
	printf("%d\n", sum);
	return (0);
}
