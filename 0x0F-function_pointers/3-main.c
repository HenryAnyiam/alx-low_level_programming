#include "3-calc.h"

/**
  *main - carries out mathematical operatiom
  *@argc: number of arguments
  *@argv: array of arguments
  *)
  *Return: 0 if success
  */
int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
