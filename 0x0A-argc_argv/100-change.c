#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints the minimum number of coins to make change
  *@argc: number of arguments
  *@argv: array of arguments
  *)
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int num, change;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num >= 0)
		{
			change = num / 25;
			num %= 25;
			change += num / 10;
			num %= 10;
			change += num / 5;
			num %= 5;
			change += num / 2;
			num %= 2;
			change += num / 1;
			printf("%d\n", change);
		}
		else
		{
			printf("0\n");
		}
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
