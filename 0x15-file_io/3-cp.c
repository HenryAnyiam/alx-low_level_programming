#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
  *check_arg - checks number of arguments
  *@arg: number of arguments
  */
void check_arg(int arg)
{
	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
  *close_file - check if files closed successfully
  *@fd: file descriptor
  */
void close_file(int fd)
{
	int i = close(fd);

	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  *check_read - check successful file read
  *@r: read return
  *@ff: file from descriptor
  *@ft: file to descriptor
  *@file: file name
  */
void check_read(int r, int ff, int ft, char *file)
{
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		close_file(ff);
		close_file(ft);
		exit(98);
	}
}
/**
  *main - copy from one file to the other
  *@argc: number of given arguments
  *@argv: array of given arguments
  *)
  *Return: 0
  */
int main(int argc, char **argv)
{
	int ft, ff, r_check;
	char buf[1024];

	check_arg(argc);
	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ft < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r_check = read(ff, buf, 1024)) > 0)
	{
		if ((write(ft, buf, r_check)) != r_check)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(ff);
			close_file(ft);
			exit(99);
		}
	}
	check_read(r_check, ff, ft, argv[1]);
	close_file(ff);
	close_file(ft);
	return (0);
}
