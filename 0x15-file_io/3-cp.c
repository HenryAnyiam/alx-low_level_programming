#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
  *main - copy from one file to the other
  *@argc: number of given arguments
  *@argv: array of given arguments
  *)
  *Return: 0
  */
int main(int argc, char **argv)
{
	int ft, ff, r_check, w_check;
	char buf[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_fromfile_to\n", 28);
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r_check = 1;
	while (r_check > 0)
	{
		r_check = read(ff, buf, 1024);
		w_check = write(ft, buf, r_check);
		if (w_check < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	r_check = close(ff);
	w_check = close(ft);
	if (r_check < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	if (w_check < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	return (0);
}
