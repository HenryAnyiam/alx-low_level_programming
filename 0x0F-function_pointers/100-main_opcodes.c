#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints opcodes
  *@argc: number of arguments
  *@argv: array of arguments
  *)
  *Return: 0
  */
int main(int argc, char **argv)
{
	char *a;
	int i;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)&main;
	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < (n - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
