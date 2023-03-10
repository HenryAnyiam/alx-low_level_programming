#include "main.h"

/**
  *main - main function
  *@argc: number of arguments passed
  *@argv: array of arguments passed
  *)
  *Return: 0 to exit
  */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc)
	{
		while (argv[0][i] != '\0')
		{
			_putchar(argv[0][i]);
			i++;
		}
	}
	_putchar('\n');
	return (0);
}
